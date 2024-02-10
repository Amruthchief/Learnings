module operation(
input [3:0]n);
reg fact;
task facto;
input  [3:0]n;
output [31:0]fact;                
integer i;
begin
    fact=1;
    for(i=n;i>0;i=i-1)
    begin
        fact=fact*i;
        $display(fact);
    end
end
endtask
initial
   #20 facto(n,fact);
endmodule