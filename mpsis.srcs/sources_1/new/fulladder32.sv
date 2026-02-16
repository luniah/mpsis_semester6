module fulladder32(
  input  logic [31:0] a_i,
  input  logic [31:0] b_i,
  input  logic       carry_i,
  output logic [31:0] sum_o,
  output logic       carry_o
);

logic [7:0] carry_ii;
logic [7:0] carry_oo;

assign carry_ii[0] = carry_i;
assign carry_o = carry_oo[7];

fulladder4 adder4[7:0](
    .a_i(a_i),
    .b_i(b_i),
    .carry_i(carry_ii),
    .sum_o(sum_o),
    .carry_o(carry_oo)
);

assign carry_ii[7:1] = carry_oo[6:0];

endmodule