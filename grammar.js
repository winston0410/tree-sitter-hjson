const jsonc = require("tree-sitter-jsonc/grammar");

module.exports = grammar(jsonc, {
  name: "hjson",

  rules: {
    _value: (_, original) => original,

    pair: (_, original) => original,

    object: ($) => seq("{", lineBreakOrComma($.pair), "}"),

    string: ($, original) =>
      choice($.quoted_string, $.multiline_string),
      //  choice($.quoted_string, $.multiline_string, $.quoteless_string),

    array: ($) => seq("[", lineBreakOrComma($._value), "]"),

    quoted_string: ($) =>
      choice(
        seq('"', $._quoted_string_content, '"'),
        seq("'", $._quoted_string_content, "'")
      ),

    _quoted_string_content: ($) =>
      repeat(choice(token.immediate(/[^\\"\'\n]+/), $.escape_sequence)),

    //  quoteless string is conflicting with quoted string
    //  quoteless_string: ($) => repeat1(/[^\n]+/),

    multiline_string: ($) => seq("'''", repeat(/[^\\"\'\n]+/), "'''"),

    escape_sequence: ($, original) => original,

    comment: ($, original) => token(choice(original, seq("#", /.*/))),
  },
});

function lineBreakOrComma1(rule) {
  return seq(rule, repeat(seq(",", optional(rule))));
}

function lineBreakOrComma(rule) {
  return optional(lineBreakOrComma1(rule));
}
