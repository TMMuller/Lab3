Todd Muller
Lab03

1) n = 22 -> sum = 253

2) The value of n where overflow occurs for the short datatype is n=257.
The overflow in this process can be detected since the value sqitches from positive to negative.

3) The value of n where overflow occurs for the long datatype is n=65536

4) In this case an overflow can be detected by testing the condition that while(product/product==1).
	Using this solution we can find that the overflow occurs at n=35.

5) With a type double we find that the product overflows at n = 171 

6) The results are that the resulting value of the sum is 1, which is incorrect since the value should be higher.
A possible explanation for this behavior would be underflow. Another possible explanation
is the type of data that is being returned.

7) The code should stop at 4.2 and should not print 4.4, but 4.4 is printed. The error occurs 
because the value stored for i when I is incremented is not exactly 4.4 but is a little lower than that.

8) The effect when chaging the data type to a double is that the value stored for 4.4 is actually 4.4 or some value
higher that 4.4.



Lab location 
C:\Users\tmuller4\source\repos\Lab03\Lab03