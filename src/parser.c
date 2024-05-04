#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_AS = 1,
  anon_sym_IWANT = 2,
  sym_I_EXPECT = 3,
  anon_sym_SO = 4,
  sym_SO_I = 5,
  sym_content = 6,
  sym_source = 7,
  sym_userstory = 8,
  sym_role = 9,
  sym_requirement = 10,
  sym_reason = 11,
  sym_I_WANT = 12,
  sym_SO = 13,
  aux_sym_source_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_AS] = "AS",
  [anon_sym_IWANT] = "I WANT",
  [sym_I_EXPECT] = "I_EXPECT",
  [anon_sym_SO] = "SO",
  [sym_SO_I] = "SO_I",
  [sym_content] = "content",
  [sym_source] = "source",
  [sym_userstory] = "userstory",
  [sym_role] = "role",
  [sym_requirement] = "requirement",
  [sym_reason] = "reason",
  [sym_I_WANT] = "I_WANT",
  [sym_SO] = "SO",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_AS] = sym_AS,
  [anon_sym_IWANT] = anon_sym_IWANT,
  [sym_I_EXPECT] = sym_I_EXPECT,
  [anon_sym_SO] = anon_sym_SO,
  [sym_SO_I] = sym_SO_I,
  [sym_content] = sym_content,
  [sym_source] = sym_source,
  [sym_userstory] = sym_userstory,
  [sym_role] = sym_role,
  [sym_requirement] = sym_requirement,
  [sym_reason] = sym_reason,
  [sym_I_WANT] = sym_I_WANT,
  [sym_SO] = sym_SO,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_AS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IWANT] = {
    .visible = true,
    .named = false,
  },
  [sym_I_EXPECT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SO] = {
    .visible = true,
    .named = false,
  },
  [sym_SO_I] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_userstory] = {
    .visible = true,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_requirement] = {
    .visible = true,
    .named = true,
  },
  [sym_reason] = {
    .visible = true,
    .named = true,
  },
  [sym_I_WANT] = {
    .visible = true,
    .named = true,
  },
  [sym_SO] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == 'A') ADVANCE(10);
      if (lookahead == 'I') ADVANCE(1);
      if (lookahead == 'S') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(13);
      if (lookahead == 'W') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'I') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'N') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'P') ADVANCE(5);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'X') ADVANCE(9);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_AS);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_IWANT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_I_EXPECT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_SO_I);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_content);
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
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_AS] = ACTIONS(1),
    [anon_sym_IWANT] = ACTIONS(1),
    [sym_I_EXPECT] = ACTIONS(1),
    [anon_sym_SO] = ACTIONS(1),
    [sym_SO_I] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(11),
    [sym_userstory] = STATE(2),
    [sym_role] = STATE(4),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_AS] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_AS,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_role,
    STATE(3), 2,
      sym_userstory,
      aux_sym_source_repeat1,
  [14] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_AS,
    STATE(4), 1,
      sym_role,
    STATE(3), 2,
      sym_userstory,
      aux_sym_source_repeat1,
  [28] = 3,
    STATE(5), 1,
      sym_requirement,
    STATE(13), 1,
      sym_I_WANT,
    ACTIONS(14), 2,
      anon_sym_IWANT,
      sym_I_EXPECT,
  [39] = 4,
    ACTIONS(16), 1,
      anon_sym_SO,
    ACTIONS(18), 1,
      sym_SO_I,
    STATE(7), 1,
      sym_reason,
    STATE(15), 1,
      sym_SO,
  [52] = 1,
    ACTIONS(20), 2,
      anon_sym_IWANT,
      sym_I_EXPECT,
  [57] = 1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      sym_AS,
  [62] = 2,
    ACTIONS(24), 1,
      anon_sym_SO,
    ACTIONS(26), 1,
      sym_SO_I,
  [69] = 1,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      sym_AS,
  [74] = 1,
    ACTIONS(30), 1,
      sym_content,
  [78] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
  [82] = 1,
    ACTIONS(34), 1,
      sym_content,
  [86] = 1,
    ACTIONS(36), 1,
      sym_content,
  [90] = 1,
    ACTIONS(38), 1,
      sym_content,
  [94] = 1,
    ACTIONS(40), 1,
      sym_content,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 52,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 74,
  [SMALL_STATE(11)] = 78,
  [SMALL_STATE(12)] = 82,
  [SMALL_STATE(13)] = 86,
  [SMALL_STATE(14)] = 90,
  [SMALL_STATE(15)] = 94,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 2, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userstory, 3, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_requirement, 2, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_requirement, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason, 2, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [32] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_I_WANT, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SO, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_userstory(void) {
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
