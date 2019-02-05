#include<stdio.h>
int main()
{
    int n,c=0,rem,a[10],i;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        a[c]=rem;
        c++;
        n=n/10;
    }
for(i=c-1;i>=0;i--)
{
    printf("%d ",a[i]);
}
return 0;
}
