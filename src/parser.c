#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  sym_identifier = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym_movement_block_token1 = 4,
  sym_text_block_type = 5,
  aux_sym_block_type_token1 = 6,
  aux_sym_block_type_token2 = 7,
  aux_sym_block_type_token3 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  aux_sym_string_token1 = 11,
  aux_sym_const_block_token1 = 12,
  sym_const_type = 13,
  sym_comment = 14,
  sym_number = 15,
  sym_source_file = 16,
  sym_block = 17,
  sym_text_block = 18,
  sym_block_type = 19,
  sym_func = 20,
  sym_string = 21,
  sym_const_block = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_block_repeat1 = 24,
  aux_sym_text_block_repeat1 = 25,
  aux_sym_string_repeat1 = 26,
  aux_sym_const_block_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_movement_block_token1] = "movement_block_token1",
  [sym_text_block_type] = "text_block_type",
  [aux_sym_block_type_token1] = "block_type_token1",
  [aux_sym_block_type_token2] = "block_type_token2",
  [aux_sym_block_type_token3] = "block_type_token3",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_const_block_token1] = "const_block_token1",
  [sym_const_type] = "const_type",
  [sym_comment] = "comment",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_text_block] = "text_block",
  [sym_block_type] = "block_type",
  [sym_func] = "func",
  [sym_string] = "string",
  [sym_const_block] = "const_block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_text_block_repeat1] = "text_block_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_const_block_repeat1] = "const_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_movement_block_token1] = aux_sym_movement_block_token1,
  [sym_text_block_type] = sym_text_block_type,
  [aux_sym_block_type_token1] = aux_sym_block_type_token1,
  [aux_sym_block_type_token2] = aux_sym_block_type_token2,
  [aux_sym_block_type_token3] = aux_sym_block_type_token3,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_const_block_token1] = aux_sym_const_block_token1,
  [sym_const_type] = sym_const_type,
  [sym_comment] = sym_comment,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_text_block] = sym_text_block,
  [sym_block_type] = sym_block_type,
  [sym_func] = sym_func,
  [sym_string] = sym_string,
  [sym_const_block] = sym_const_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_text_block_repeat1] = aux_sym_text_block_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_const_block_repeat1] = aux_sym_const_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_movement_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_text_block_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_block_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_type_token3] = {
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
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_block_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_const_type] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_text_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_type] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_const_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_block_name = 1,
  field_func_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block_name] = "block_name",
  [field_func_name] = "func_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block_name, 1},
  [1] =
    {field_func_name, 0},
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(10);
      if (lookahead == '\r') ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_const_block_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'm') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_block_type_token3);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text_block_type);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_const_type);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_block_type_token2);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_movement_block_token1);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_block_type_token1);
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_movement_block_token1] = ACTIONS(1),
    [sym_text_block_type] = ACTIONS(1),
    [aux_sym_block_type_token1] = ACTIONS(1),
    [aux_sym_block_type_token2] = ACTIONS(1),
    [aux_sym_block_type_token3] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_const_block_token1] = ACTIONS(1),
    [sym_const_type] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(31),
    [sym_block] = STATE(2),
    [sym_text_block] = STATE(2),
    [sym_block_type] = STATE(30),
    [sym_const_block] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_movement_block_token1] = ACTIONS(7),
    [sym_text_block_type] = ACTIONS(9),
    [aux_sym_block_type_token1] = ACTIONS(7),
    [aux_sym_block_type_token2] = ACTIONS(7),
    [aux_sym_block_type_token3] = ACTIONS(7),
    [sym_const_type] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_text_block_type,
    ACTIONS(11), 1,
      sym_const_type,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_block_type,
    ACTIONS(7), 4,
      aux_sym_movement_block_token1,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
    STATE(3), 4,
      sym_block,
      sym_text_block,
      sym_const_block,
      aux_sym_source_file_repeat1,
  [28] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(20), 1,
      sym_text_block_type,
    ACTIONS(23), 1,
      sym_const_type,
    STATE(30), 1,
      sym_block_type,
    ACTIONS(17), 4,
      aux_sym_movement_block_token1,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
    STATE(3), 4,
      sym_block,
      sym_text_block,
      sym_const_block,
      aux_sym_source_file_repeat1,
  [56] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(33), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_const_block_repeat1,
    ACTIONS(31), 6,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [80] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(42), 1,
      sym_number,
    STATE(6), 1,
      aux_sym_const_block_repeat1,
    ACTIONS(40), 6,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [104] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_number,
    STATE(4), 1,
      aux_sym_const_block_repeat1,
    ACTIONS(48), 6,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      aux_sym_movement_block_token1,
      sym_text_block_type,
      aux_sym_block_type_token1,
      aux_sym_block_type_token2,
      aux_sym_block_type_token3,
      sym_const_type,
  [180] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    STATE(13), 3,
      sym_func,
      sym_string,
      aux_sym_block_repeat1,
  [198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      aux_sym_string_token1,
    STATE(12), 3,
      sym_func,
      sym_string,
      aux_sym_text_block_repeat1,
  [216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      aux_sym_string_token1,
    STATE(13), 3,
      sym_func,
      sym_string,
      aux_sym_block_repeat1,
  [234] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(16), 3,
      sym_func,
      sym_string,
      aux_sym_text_block_repeat1,
  [252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym_func,
      sym_string,
      aux_sym_block_repeat1,
  [270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(12), 3,
      sym_func,
      sym_string,
      aux_sym_text_block_repeat1,
  [288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_token1,
      sym_identifier,
  [298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      aux_sym_string_token1,
    STATE(34), 1,
      sym_string,
    ACTIONS(92), 2,
      sym_number,
      sym_identifier,
  [312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      aux_sym_string_token1,
      sym_identifier,
  [322] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      sym_identifier,
  [334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(106), 1,
      aux_sym_string_token1,
    STATE(21), 1,
      aux_sym_string_repeat1,
  [360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      aux_sym_string_token1,
    STATE(23), 1,
      aux_sym_string_repeat1,
  [373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_RBRACE,
      aux_sym_string_token1,
      sym_identifier,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_identifier,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_LBRACE,
  [403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_const_block_token1,
  [410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
  [417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_identifier,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_identifier,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_identifier,
  [445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 128,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 322,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 347,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 373,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 417,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 431,
  [SMALL_STATE(33)] = 438,
  [SMALL_STATE(34)] = 445,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_block_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_const_block_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_const_block_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_block_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_block, 3, .production_id = 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_block, 3, .production_id = 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_block, 4, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_block, 4, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 5, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 5, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_block, 4, .production_id = 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT_REPEAT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_block_repeat1, 2), SHIFT_REPEAT(22),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(22),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 4, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_type, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pory(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
