#include <stdio.h>
int main() 
{
int a, b, n,m, t, gcd, lcm;
printf("Enter two integers\n");
scanf("%d%d", &n ,&m);
a = n;
b = m;
while (b != 0) 
{
t = b;
b = a % b;
a = t;
}
gcd = a;
lcm = (n*m)/gcd;
printf("lcm= %d\n", lcm);
return 0;
}

