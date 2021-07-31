const jsonc = require("tree-sitter-jsonc/grammar");

module.exports = grammar(jsonc, {
  name: "hjson",

  rules: {
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
