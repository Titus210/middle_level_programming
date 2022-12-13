## Compound Interest Calculator
In this example, we will make a simple program that can facilitate financial investments. <br/>
 Let’s assume we have $1000 (the original principal amount), and we want to safely invest it in a bank at
an interest rate of 3% per year. It is easy to determine that after a year, we will gain $1000 · 3% = $30,
so our final principal amount will be $1030. What happens if we repeat the same thing? Now our
initial principal amount is $1030, so after a year, we will have a gain of $1030 · 3% = $30.90. This
time we earn slightly more than in the first year, since we started with a slightly higher principal
amount. Let’s write a C++ program that does these computations for us.