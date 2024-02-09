module.exports = grammar({
  name: "musashi",

  extras: $ => [
    /(\s|\f)/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($.list),

    comment: $ => /;.*/,

    _type: $ => choice(
      $.list,
      $.symbol,
      $.number,
      $.string,
    ),

    function: $ => /[a-zA-Z_=%\*\+\-\/]+[a-zA-Z0-9_]*/,
    symbol: $ => choice("nil", /[a-zA-Z_]+[a-zA-Z0-9_<>\.]*/),
    number: $ => seq(optional("-"), /[0-9]+/, optional(seq(".", /[0-9]+/))),
    string: $ => seq('"', repeat(/./), '"'),

    list: $ => seq(
      "(",
      $.function,
      repeat($._type),
      ")"
    ),
  },
});

