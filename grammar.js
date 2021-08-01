const jsonc = require("tree-sitter-jsonc/grammar");

module.exports = grammar(jsonc, {
  name: "hjson",

  rules: {
    _value: (_, original) => original,
      
    pair: (_, original) => original,

    object: ($) => seq("{", lineBreakOrComma($.pair), "}"),

    array: ($) => seq("[", lineBreakOrComma($._value), "]"),

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
  //  TODO: fix test for omitting comma
  //  return seq(rule, choice(optional(","), repeat(seq(",", rule))));
  return seq(rule, repeat(seq(",", optional(rule))));
}

function lineBreakOrComma(rule) {
  return optional(lineBreakOrComma1(rule));
}
