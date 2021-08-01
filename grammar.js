const jsonc = require("tree-sitter-jsonc/grammar");

module.exports = grammar(jsonc, {
  name: "hjson",

  rules: {
    pair: (_, original) => original,

    object: ($) => seq("{", lineBreakOrComma($.pair), "}"),

    string_without_punctuators: ($) =>
      repeat1(token.immediate(/[^\{\}\[\],:\\\"\n]+/)),

    string_with_punctuators: ($) => repeat1(token.immediate(/[^\\\"\n]+/)),

    string: ($, original) =>
      choice(
        seq('"', '"'),
        seq(
          '"',
          choice($.string_without_punctuators, $.string_with_punctuators),
          '"'
        ),
        $.string_without_punctuators
      ),

    comment: ($, original) => {
      return token(choice(original, seq("#", /.*/)));
    },
  },
});

function lineBreakOrComma1(rule) {
  //  return seq(rule, repeat(choice(seq(",", rule), seq("\n", rule))));
  return seq(rule, repeat(choice(",", seq(",", rule))));
}

function lineBreakOrComma(rule) {
  return optional(lineBreakOrComma1(rule));
}
