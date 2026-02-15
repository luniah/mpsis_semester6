module example(
    input logic a,
    input logic b, 
    input logic c, 
    input logic d, 
    output logic e,
    output logic f
);

logic ab;
logic cd;

assign ab = a & b; 
assign cd = c & d;

assign e = ab ^ cd;
assign f = cd;


endmodule