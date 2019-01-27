#include <stdio.h>

int main()
{
    int a,n,d,l,i,sum=0;
    printf("\n enter a,n,d");
    scanf("%d%d%d",&a,&n,&d);
    sum=(n*(2*a+(n-1)*d))/2;
    l=a+(n-1)*d;
    for(i=a;i<=l;i=i+d)
    {
        if(i!=l)
        {
            printf("%d+",i);
        }
        else
        {
            printf("%d=%d",i,sum);
        }
    }
    return 0;
}
