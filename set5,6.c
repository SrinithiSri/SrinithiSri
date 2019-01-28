#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n>=0 && n<10000000)
    {
    n=n+1;
    printf("%d",n);
    }
    return 0;
}
