
module.exports = grammar({
  name: "userstory",
  extras: _ => [
    /\s/,
  ],
  rules: {
    source: $ => repeat($.userstory),

    userstory: $ => seq(
      $.role,
      $.requirement,
      $.reason,
    ),

    role: $ => seq(
      $.AS,
      // $.content
    ),
    requirement: $ => seq(
      $.I_WANT,
      // $.content
    ),

    reason: $ => seq(
      $.SO,
      // $.content
    ),

    AS: _ => "AS",
    I_WANT: $ => choice(
      "I WANT",
      $.I_EXPECT,
    ),
    I_EXPECT: _ => "I EXPECT",
    SO: $ => choice(
      "SO",
      $.SO_I
    ),

    SO_I: _ => "SO I",


    content: _ => ""
    // source: $ => repeat($.userstory),
    // userstory: $ => seq(
    // 	"AS",
    // 	$.role,
    // 	"I Want",
    // 	$.request,
    // 	"SO I",
    // 	$.reason
    // ),
    //
    // role: $ => /.*/,
    // request: $ => /.*/,
    // reason: $ => /.*/,
  }
})
