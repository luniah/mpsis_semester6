module fulladder(
  input  logic a_i,
  input  logic b_i,
  input  logic carry_i,
  output logic sum_o,
  output logic carry_o
);

logic AxorB;
logic AandB;
logic AandCarry;
logic AxorBxorCarry;
logic BandCarry;
logic AandBorAandCarry;

assign AxorB = a_i ^ b_i;
assign AandCarry = a_i & carry_i;
assign AandB = a_i & b_i;
assign BandCarry = b_i & carry_i;
assign AxorBxorCarry = AxorB ^ carry_i;
assign sum_o = AxorBxorCarry;
assign AandBorAandCarry = AandB | AandCarry;
assign carry_o = AandBorAandCarry | BandCarry;



endmodule