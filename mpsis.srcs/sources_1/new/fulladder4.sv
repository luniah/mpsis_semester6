module fulladder4(
  input  logic [3:0] a_i,
  input  logic [3:0] b_i,
  input  logic       carry_i,
  output logic [3:0] sum_o,
  output logic       carry_o
);

logic [3:0] carry_ii;
logic [3:0] carry_oo;

assign carry_ii[0] = carry_i;
assign carry_o = carry_oo[3];

fulladder adder[3:0](
    .a_i(a_i),
    .b_i(b_i),
    .carry_i(carry_ii),
    .sum_o(sum_o),
    .carry_o(carry_oo)
);

assign carry_ii[3:1] = carry_oo[2:0];

endmodule