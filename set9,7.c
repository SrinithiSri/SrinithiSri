#include <stdio.h>
int main()
{
int a,b,n,m,gcd;
scanf("%d%d",&n,&m);
a=n;
b=m;
b=a%b;
gcd=b;
printf("gcd=%d",gcd);
return 0;
}
