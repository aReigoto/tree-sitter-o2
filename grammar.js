const PREC = {
  primitive_type: -1,

}

const SEMICOLON = ';'


module.exports = grammar({
  name: 'o2',

  // An array of tokens that may appear anywhere in the language
  extras: $ => [
    /\s|\\\r?\n/,
    $.comment_c,
    
  ],

  rules: {

		program: $ => repeat($.statments),

		statments: $ => choice(
			$.double,
      $.variable,
			$.primitive_type,
      $.plot_menu,
      //$.comment_asterisc,
		),

		primitive_type: $ => choice(
			ci("double"),
			ci("string"),
		),

		plot_menu: $ => choice(
			ci("shape"),
			ci("aber"),
   	),

    fl_menu: $ => seq(
      'fl',
      // more stuff
      'end',
    ),

    double: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eEdD][\+-]?/, digits)

      return token(
        choice(
					digits,
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent)
        ),
      )
    },

    // number: $ => /((\d+(\.\d+)?)|(\.\d+))([edED]\d+)?/,
		// int: $ => /\d+/,
    variable: $ => /([a-zA-Z$][0-9a-zA-Z_]*)/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment_c: $ => token(choice(
      seq('//', /(\\(.|\r?\n)|[^\\\n])*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    )),
    // comment_asterisc: $ => token(
    //   seq(/\*/, /(\\(.|\r?\n)|[^\\\n])*/),
    // ),
 }
});


function ci(word) {
		// case insensitive
    //return word // when debuging
    return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
    return token(prec(1, new RegExp(regex)))
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}

