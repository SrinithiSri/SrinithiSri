#include <stdio.h>
int main()
{
    int n,k,sum=1,i;
    printf("enter n and k");
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        sum=sum*n;
    }
    printf("power=%d",sum);

    return 0;
}
