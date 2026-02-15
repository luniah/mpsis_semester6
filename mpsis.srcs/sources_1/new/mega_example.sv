module mega_example(
    input logic A,
    input logic B,
    input logic C,
    input logic D,
    input logic E,
    input logic F,
    output logic G,
    output logic H
);

logic ea;
logic fb;

example ex1(
    .a(A),
    .b(B), 
    .c(C), 
    .d(D), 
    .e(ea),
    .f(fb)
);

example ex2 (
    .a(ea), 
    .b(!fb),
    .c(E),
    .d(F),
    .e(G),
    .f(H)
);

endmodule