#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_escape_sequence = 7,
  sym_number = 8,
  sym_true = 9,
  sym_false = 10,
  sym_null = 11,
  sym_comment = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_SQUOTE = 14,
  aux_sym__quoted_string_content_token1 = 15,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 16,
  aux_sym_multiline_string_token1 = 17,
  sym_document = 18,
  sym__value = 19,
  sym_object = 20,
  sym_pair = 21,
  sym_array = 22,
  sym_string = 23,
  sym_quoted_string = 24,
  aux_sym__quoted_string_content = 25,
  sym_multiline_string = 26,
  aux_sym_object_repeat1 = 27,
  aux_sym_array_repeat1 = 28,
  aux_sym_multiline_string_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_string_content_token1] = "_quoted_string_content_token1",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__quoted_string_content] = "_quoted_string_content",
  [sym_multiline_string] = "multiline_string",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_string_content_token1] = aux_sym__quoted_string_content_token1,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__quoted_string_content] = aux_sym__quoted_string_content,
  [sym_multiline_string] = sym_multiline_string,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_content] = {
    .visible = false,
    .named = false,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(37);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(51);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__quoted_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(64);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\') ADVANCE(8);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(65);
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(38),
    [sym__value] = STATE(37),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_quoted_string] = STATE(11),
    [sym_multiline_string] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
  },
  [2] = {
    [sym__value] = STATE(35),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_quoted_string] = STATE(11),
    [sym_multiline_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(19),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
  },
  [3] = {
    [sym__value] = STATE(28),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_quoted_string] = STATE(11),
    [sym_multiline_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
  },
  [4] = {
    [sym__value] = STATE(33),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_quoted_string] = STATE(11),
    [sym_multiline_string] = STATE(11),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_true] = ACTIONS(11),
    [sym_false] = ACTIONS(11),
    [sym_null] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [anon_sym_SQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      sym_number,
    STATE(34), 1,
      sym_pair,
    STATE(36), 1,
      sym_string,
    ACTIONS(23), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(11), 2,
      sym_quoted_string,
      sym_multiline_string,
  [30] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_SQUOTE,
    ACTIONS(17), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_pair,
    STATE(36), 1,
      sym_string,
    STATE(11), 2,
      sym_quoted_string,
      sym_multiline_string,
  [59] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [70] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [81] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [92] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [114] = 5,
    ACTIONS(39), 1,
      sym_escape_sequence,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__quoted_string_content_token1,
    STATE(12), 1,
      aux_sym__quoted_string_content,
    ACTIONS(44), 2,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [131] = 5,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_escape_sequence,
    ACTIONS(51), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym__quoted_string_content_token1,
    STATE(18), 1,
      aux_sym__quoted_string_content,
  [147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [177] = 5,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_escape_sequence,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      aux_sym__quoted_string_content_token1,
    STATE(12), 1,
      aux_sym__quoted_string_content,
  [193] = 5,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_escape_sequence,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      aux_sym__quoted_string_content_token1,
    STATE(12), 1,
      aux_sym__quoted_string_content,
  [209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [239] = 5,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_escape_sequence,
    ACTIONS(75), 1,
      aux_sym__quoted_string_content_token1,
    STATE(17), 1,
      aux_sym__quoted_string_content,
  [255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [265] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_repeat1,
  [278] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_repeat1,
  [291] = 4,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(89), 1,
      aux_sym_multiline_string_token1,
    STATE(27), 1,
      aux_sym_multiline_string_repeat1,
  [304] = 4,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(93), 1,
      aux_sym_multiline_string_token1,
    STATE(30), 1,
      aux_sym_multiline_string_repeat1,
  [317] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(95), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_array_repeat1,
  [330] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
  [343] = 4,
    ACTIONS(42), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(101), 1,
      aux_sym_multiline_string_token1,
    STATE(30), 1,
      aux_sym_multiline_string_repeat1,
  [356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_repeat1,
  [369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_array_repeat1,
  [382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 81,
  [SMALL_STATE(10)] = 92,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 114,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 147,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 167,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 193,
  [SMALL_STATE(19)] = 209,
  [SMALL_STATE(20)] = 219,
  [SMALL_STATE(21)] = 229,
  [SMALL_STATE(22)] = 239,
  [SMALL_STATE(23)] = 255,
  [SMALL_STATE(24)] = 265,
  [SMALL_STATE(25)] = 278,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 304,
  [SMALL_STATE(28)] = 317,
  [SMALL_STATE(29)] = 330,
  [SMALL_STATE(30)] = 343,
  [SMALL_STATE(31)] = 356,
  [SMALL_STATE(32)] = 369,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 390,
  [SMALL_STATE(35)] = 398,
  [SMALL_STATE(36)] = 406,
  [SMALL_STATE(37)] = 413,
  [SMALL_STATE(38)] = 420,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_content, 2), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_content, 2), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(30),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [120] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_hjson(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
