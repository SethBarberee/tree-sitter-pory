module.exports = grammar({
  name: "pory",

  word: ($) => $.identifier,

  extras: ($) => [$.comment, /\s/],

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat(choice($.block, $.text_block, $.const_block)),

    block: ($) =>
      seq(
        $.block_type,
        field("block_name", $.identifier),
        "{",
        repeat(choice($.identifier, $.string, $.func)),
        "}"
      ),

    movement_block: ($) =>
      seq(
        /movement/,
        field("block_name", $.identifier),
        "{",
        repeat(choice($.identifier, $.number)),
        "}"
      ),

    text_block: ($) =>
      seq(
        $.text_block_type,
        field("block_name", $.identifier),
        "{",
        repeat(choice($.func, $.string)),
        "}"
      ),

    text_block_type: ($) => /text/,

    block_type: ($) => choice(/mapscripts/, /script/, /movement/, /mart/),

    func: ($) =>
      seq(
        field("func_name", $.identifier),
        "(",
        choice($.identifier, $.string, $.number),
        ")"
      ),

    // TODO: better handle punctation in strings such as ! and others
    string: ($) => seq(/"/, repeat($.identifier), /"/),

    const_block: ($) =>
      seq(
        $.const_type,
        field("block_name", $.identifier),
        /=/,
        repeat(choice($.number, $.identifier))
      ),

    const_type: ($) => /const/,

    comment: ($) => token(seq("#", /(\\(.|\r?\n)|[^\\\n])*/)),
    number: ($) => token(choice(/\d+/, /0[xX][0-9a-fA-F]+/)),
    identifier: ($) => /[a-zA-Z_]\w*/,
  },
});
