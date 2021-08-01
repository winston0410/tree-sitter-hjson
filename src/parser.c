#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  anon_sym_DQUOTE = 7,
  sym_escape_sequence = 8,
  sym_number = 9,
  sym_true = 10,
  sym_false = 11,
  sym_null = 12,
  sym_comment = 13,
  aux_sym_string_without_punctuators_token1 = 14,
  aux_sym_string_with_punctuators_token1 = 15,
  sym_document = 16,
  sym__value = 17,
  sym_object = 18,
  sym_pair = 19,
  sym_array = 20,
  sym_string = 21,
  sym_string_without_punctuators = 22,
  sym_string_with_punctuators = 23,
  aux_sym_object_repeat1 = 24,
  aux_sym_array_repeat1 = 25,
  aux_sym_string_without_punctuators_repeat1 = 26,
  aux_sym_string_with_punctuators_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [aux_sym_string_without_punctuators_token1] = "string_without_punctuators_token1",
  [aux_sym_string_with_punctuators_token1] = "string_with_punctuators_token1",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_array] = "array",
  [sym_string] = "string",
  [sym_string_without_punctuators] = "string_without_punctuators",
  [sym_string_with_punctuators] = "string_with_punctuators",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_without_punctuators_repeat1] = "string_without_punctuators_repeat1",
  [aux_sym_string_with_punctuators_repeat1] = "string_with_punctuators_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [aux_sym_string_without_punctuators_token1] = aux_sym_string_without_punctuators_token1,
  [aux_sym_string_with_punctuators_token1] = aux_sym_string_with_punctuators_token1,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [sym_string_without_punctuators] = sym_string_without_punctuators,
  [sym_string_with_punctuators] = sym_string_with_punctuators,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_without_punctuators_repeat1] = aux_sym_string_without_punctuators_repeat1,
  [aux_sym_string_with_punctuators_repeat1] = aux_sym_string_with_punctuators_repeat1,
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
  [anon_sym_DQUOTE] = {
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
  [aux_sym_string_without_punctuators_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_with_punctuators_token1] = {
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
  [sym_string_without_punctuators] = {
    .visible = true,
    .named = true,
  },
  [sym_string_with_punctuators] = {
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
  [aux_sym_string_without_punctuators_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_with_punctuators_repeat1] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(27)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(52);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(39);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 19:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == '"' ||
          lookahead == '/' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 25:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') SKIP(28)
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != '\\' &&
          lookahead != '{') ADVANCE(87);
      END_STATE();
    case 26:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '#') ADVANCE(53);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_null);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          (lookahead < ',' || ':' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          (lookahead < ',' || ':' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == ',' ||
          lookahead == ':' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == ',' ||
          lookahead == ':' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(6);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead == ',' ||
          lookahead == ':' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(91);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead == ',' ||
          lookahead == ':' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(91);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(83);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '0') ADVANCE(65);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'e') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'l') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'u') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(53);
      if (lookahead == ',' ||
          lookahead == ':' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead == '"' ||
          lookahead == ',' ||
          lookahead == ':' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_without_punctuators_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != ',' &&
          lookahead != ':' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_string_with_punctuators_token1);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_with_punctuators_token1);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_with_punctuators_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_with_punctuators_token1);
      if (lookahead == '*') ADVANCE(90);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(6);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_with_punctuators_token1);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_string_with_punctuators_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(93);
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
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_without_punctuators_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(31),
    [sym__value] = STATE(33),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_string_without_punctuators] = STATE(12),
    [aux_sym_string_without_punctuators_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_without_punctuators_token1] = ACTIONS(15),
  },
  [2] = {
    [sym__value] = STATE(20),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_string_without_punctuators] = STATE(12),
    [aux_sym_string_without_punctuators_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_without_punctuators_token1] = ACTIONS(15),
  },
  [3] = {
    [sym__value] = STATE(30),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_string_without_punctuators] = STATE(12),
    [aux_sym_string_without_punctuators_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_without_punctuators_token1] = ACTIONS(15),
  },
  [4] = {
    [sym__value] = STATE(29),
    [sym_object] = STATE(15),
    [sym_array] = STATE(15),
    [sym_string] = STATE(15),
    [sym_string_without_punctuators] = STATE(12),
    [aux_sym_string_without_punctuators_repeat1] = STATE(7),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [sym_null] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [aux_sym_string_without_punctuators_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_without_punctuators_token1,
    ACTIONS(21), 1,
      sym_number,
    STATE(7), 1,
      aux_sym_string_without_punctuators_repeat1,
    STATE(12), 1,
      sym_string_without_punctuators,
    STATE(28), 1,
      sym_pair,
    STATE(34), 1,
      sym_string,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [29] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_string_without_punctuators_token1,
    ACTIONS(21), 1,
      sym_number,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_string_without_punctuators_repeat1,
    STATE(12), 1,
      sym_string_without_punctuators,
    STATE(23), 1,
      sym_pair,
    STATE(34), 1,
      sym_string,
  [57] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      aux_sym_string_without_punctuators_token1,
    STATE(8), 1,
      aux_sym_string_without_punctuators_repeat1,
    ACTIONS(27), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [77] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      aux_sym_string_without_punctuators_token1,
    STATE(8), 1,
      aux_sym_string_without_punctuators_repeat1,
    ACTIONS(33), 5,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
  [97] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      aux_sym_string_without_punctuators_token1,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      aux_sym_string_with_punctuators_token1,
    STATE(7), 1,
      aux_sym_string_without_punctuators_repeat1,
    STATE(22), 1,
      aux_sym_string_with_punctuators_repeat1,
    STATE(32), 2,
      sym_string_without_punctuators,
      sym_string_with_punctuators,
  [120] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(42), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [131] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [142] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RBRACK,
  [153] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [163] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(52), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [173] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [183] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [193] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [203] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [213] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [223] = 4,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      aux_sym_array_repeat1,
  [236] = 4,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
  [249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_string_with_punctuators_token1,
    STATE(27), 1,
      aux_sym_string_with_punctuators_repeat1,
  [262] = 4,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(24), 1,
      aux_sym_object_repeat1,
  [275] = 4,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
  [288] = 4,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      aux_sym_object_repeat1,
  [301] = 4,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_array_repeat1,
  [314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_string_with_punctuators_token1,
    STATE(27), 1,
      aux_sym_string_with_punctuators_repeat1,
  [327] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(86), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [335] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [343] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(71), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [351] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [358] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
  [365] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
  [372] = 2,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 29,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 163,
  [SMALL_STATE(15)] = 173,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 213,
  [SMALL_STATE(20)] = 223,
  [SMALL_STATE(21)] = 236,
  [SMALL_STATE(22)] = 249,
  [SMALL_STATE(23)] = 262,
  [SMALL_STATE(24)] = 275,
  [SMALL_STATE(25)] = 288,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 314,
  [SMALL_STATE(28)] = 327,
  [SMALL_STATE(29)] = 335,
  [SMALL_STATE(30)] = 343,
  [SMALL_STATE(31)] = 351,
  [SMALL_STATE(32)] = 358,
  [SMALL_STATE(33)] = 365,
  [SMALL_STATE(34)] = 372,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_without_punctuators, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_without_punctuators, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_without_punctuators_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_without_punctuators_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_without_punctuators_repeat1, 2), SHIFT_REPEAT(8),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_with_punctuators, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_with_punctuators_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_with_punctuators_repeat1, 2), SHIFT_REPEAT(27),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
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
