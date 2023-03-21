#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 8
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_primitive_type_token1 = 1,
  aux_sym_primitive_type_token2 = 2,
  aux_sym_plot_menu_token1 = 3,
  aux_sym_plot_menu_token2 = 4,
  anon_sym_fl = 5,
  anon_sym_end = 6,
  sym_double = 7,
  sym_variable = 8,
  sym_comment_c = 9,
  sym_program = 10,
  sym_statments = 11,
  sym_primitive_type = 12,
  sym_plot_menu = 13,
  aux_sym_program_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_primitive_type_token1] = "double",
  [aux_sym_primitive_type_token2] = "string",
  [aux_sym_plot_menu_token1] = "shape",
  [aux_sym_plot_menu_token2] = "aber",
  [anon_sym_fl] = "fl",
  [anon_sym_end] = "end",
  [sym_double] = "double",
  [sym_variable] = "variable",
  [sym_comment_c] = "comment_c",
  [sym_program] = "program",
  [sym_statments] = "statments",
  [sym_primitive_type] = "primitive_type",
  [sym_plot_menu] = "plot_menu",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [aux_sym_primitive_type_token2] = aux_sym_primitive_type_token2,
  [aux_sym_plot_menu_token1] = aux_sym_plot_menu_token1,
  [aux_sym_plot_menu_token2] = aux_sym_plot_menu_token2,
  [anon_sym_fl] = anon_sym_fl,
  [anon_sym_end] = anon_sym_end,
  [sym_double] = sym_double,
  [sym_variable] = sym_variable,
  [sym_comment_c] = sym_comment_c,
  [sym_program] = sym_program,
  [sym_statments] = sym_statments,
  [sym_primitive_type] = sym_primitive_type,
  [sym_plot_menu] = sym_plot_menu,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_plot_menu_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_plot_menu_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_c] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_statments] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_plot_menu] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\\') SKIP(28)
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(9);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(19);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 12:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(8);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(64);
      END_STATE();
    case 27:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 28:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(27)
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(31)
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') SKIP(31)
      if (lookahead == '\r') SKIP(29)
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\\') SKIP(30)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead == '$' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_plot_menu_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_plot_menu_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_fl);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_double);
      if (lookahead == 'D' ||
          lookahead == 'E' ||
          lookahead == 'd' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_double);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(45);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment_c);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_comment_c);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_comment_c);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_primitive_type_token1] = ACTIONS(1),
    [aux_sym_primitive_type_token2] = ACTIONS(1),
    [aux_sym_plot_menu_token1] = ACTIONS(1),
    [aux_sym_plot_menu_token2] = ACTIONS(1),
    [anon_sym_fl] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [sym_double] = ACTIONS(1),
    [sym_comment_c] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym_statments] = STATE(2),
    [sym_primitive_type] = STATE(6),
    [sym_plot_menu] = STATE(6),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_primitive_type_token1] = ACTIONS(7),
    [aux_sym_primitive_type_token2] = ACTIONS(7),
    [aux_sym_plot_menu_token1] = ACTIONS(9),
    [aux_sym_plot_menu_token2] = ACTIONS(9),
    [sym_double] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
    [sym_comment_c] = ACTIONS(3),
  },
  [2] = {
    [sym_statments] = STATE(3),
    [sym_primitive_type] = STATE(6),
    [sym_plot_menu] = STATE(6),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [aux_sym_primitive_type_token1] = ACTIONS(7),
    [aux_sym_primitive_type_token2] = ACTIONS(7),
    [aux_sym_plot_menu_token1] = ACTIONS(9),
    [aux_sym_plot_menu_token2] = ACTIONS(9),
    [sym_double] = ACTIONS(11),
    [sym_variable] = ACTIONS(13),
    [sym_comment_c] = ACTIONS(3),
  },
  [3] = {
    [sym_statments] = STATE(3),
    [sym_primitive_type] = STATE(6),
    [sym_plot_menu] = STATE(6),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [aux_sym_primitive_type_token1] = ACTIONS(19),
    [aux_sym_primitive_type_token2] = ACTIONS(19),
    [aux_sym_plot_menu_token1] = ACTIONS(22),
    [aux_sym_plot_menu_token2] = ACTIONS(22),
    [sym_double] = ACTIONS(25),
    [sym_variable] = ACTIONS(28),
    [sym_comment_c] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_primitive_type_token1] = ACTIONS(31),
    [aux_sym_primitive_type_token2] = ACTIONS(31),
    [aux_sym_plot_menu_token1] = ACTIONS(31),
    [aux_sym_plot_menu_token2] = ACTIONS(31),
    [sym_double] = ACTIONS(31),
    [sym_variable] = ACTIONS(33),
    [sym_comment_c] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_primitive_type_token1] = ACTIONS(35),
    [aux_sym_primitive_type_token2] = ACTIONS(35),
    [aux_sym_plot_menu_token1] = ACTIONS(35),
    [aux_sym_plot_menu_token2] = ACTIONS(35),
    [sym_double] = ACTIONS(35),
    [sym_variable] = ACTIONS(37),
    [sym_comment_c] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_primitive_type_token1] = ACTIONS(39),
    [aux_sym_primitive_type_token2] = ACTIONS(39),
    [aux_sym_plot_menu_token1] = ACTIONS(39),
    [aux_sym_plot_menu_token2] = ACTIONS(39),
    [sym_double] = ACTIONS(39),
    [sym_variable] = ACTIONS(41),
    [sym_comment_c] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment_c,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plot_menu, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plot_menu, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statments, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statments, 1),
  [43] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_o2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
