#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_function = 2,
  anon_sym_nil = 3,
  aux_sym_symbol_token1 = 4,
  anon_sym_DASH = 5,
  aux_sym_number_token1 = 6,
  anon_sym_DOT = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_string_token1 = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_source_file = 12,
  sym__type = 13,
  sym_symbol = 14,
  sym_number = 15,
  sym_string = 16,
  sym_list = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_string_repeat1 = 19,
  aux_sym_list_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_function] = "function",
  [anon_sym_nil] = "nil",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_DASH] = "-",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_source_file] = "source_file",
  [sym__type] = "_type",
  [sym_symbol] = "symbol",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_list] = "list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_function] = sym_function,
  [anon_sym_nil] = anon_sym_nil,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_source_file] = sym_source_file,
  [sym__type] = sym__type,
  [sym_symbol] = sym_symbol,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_list] = sym_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
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
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == ';') ADVANCE(4);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_function);
      if (lookahead == '%' ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/' ||
          lookahead == '=') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_function);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == ';') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_list] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(7),
  },
  [2] = {
    [sym__type] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(12),
    [aux_sym_number_token1] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(24),
  },
  [3] = {
    [sym__type] = STATE(4),
    [sym_symbol] = STATE(4),
    [sym_number] = STATE(4),
    [sym_string] = STATE(4),
    [sym_list] = STATE(4),
    [aux_sym_list_repeat1] = STATE(4),
    [sym_comment] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(26),
    [aux_sym_symbol_token1] = ACTIONS(26),
    [anon_sym_DASH] = ACTIONS(28),
    [aux_sym_number_token1] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(34),
  },
  [4] = {
    [sym__type] = STATE(2),
    [sym_symbol] = STATE(2),
    [sym_number] = STATE(2),
    [sym_string] = STATE(2),
    [sym_list] = STATE(2),
    [aux_sym_list_repeat1] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [anon_sym_nil] = ACTIONS(26),
    [aux_sym_symbol_token1] = ACTIONS(26),
    [anon_sym_DASH] = ACTIONS(28),
    [aux_sym_number_token1] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 1,
      anon_sym_DOT,
    ACTIONS(38), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(40), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [18] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_DOT,
    ACTIONS(44), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(46), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [36] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [52] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(60), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [83] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(64), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [98] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(68), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(72), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_nil,
      aux_sym_symbol_token1,
    ACTIONS(76), 5,
      anon_sym_DASH,
      aux_sym_number_token1,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [143] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(15), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_list,
      aux_sym_source_file_repeat1,
  [171] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    ACTIONS(89), 1,
      aux_sym_string_token1,
    STATE(18), 1,
      aux_sym_string_repeat1,
  [184] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_string_token1,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [197] = 4,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_DQUOTE,
    ACTIONS(98), 1,
      aux_sym_string_token1,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_number_token1,
  [217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_function,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      aux_sym_number_token1,
  [231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      aux_sym_number_token1,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 18,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 52,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 98,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 128,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 171,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 210,
  [SMALL_STATE(20)] = 217,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 231,
  [SMALL_STATE(23)] = 238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(10),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(19),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(16),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_musashi(void) {
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
