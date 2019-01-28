#include<stdio.h>
int main()
{
    long int n;
    int c=0;
    scanf("%ld",&n);
    if(n>=0 && n<=100000000000)
    {
    while(n>0)
    {
        n=n/10;
        c++;
    }
    printf("%d",c);
    }
    return 0;
}
