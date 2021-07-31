const jsonc = require("tree-sitter-jsonc/grammar");

module.exports = grammar(jsonc, {
  name: "hjson",

  rules: {
    //  document: ($, original) => {
      //  return optional($._value);
    //  },

    //  object: ($, original) => original,

    //  array: ($, original) => original,

    //  number: ($, original) => original,

    //  true: ($, original) => original,

    //  false: ($, original) => original,

    //  null: ($, original) => original,
    //

    comment: ($, original) => {
      return token(choice(original, seq("#", /.*/)));
    },
  },
});
