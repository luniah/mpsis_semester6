module tb_mega_example();

logic a; 
logic b;
logic c;
logic d;
logic e;
logic f;
logic g;
logic h;

mega_example DUT(
    .A(a),
    .B(b),
    .C(c),
    .D(d),
    .E(e),
    .F(f),
    .G(g),
    .H(h)
);

initial begin
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    e = 0;
    f = 0;
    #5ns;
    a = 1;
    c = 1;
    #5ns;
    b = 1;
    d = 1;
    #5ns;
    f = 1;
    e = 1;
    #5ns;
    $finish();

end


endmodule