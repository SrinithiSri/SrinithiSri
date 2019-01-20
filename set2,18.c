#include <stdio.h>

int main()
{
    int a,b,i,j,t,rem=0,ans=0,c=0,mul=1;
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        t=i;
        c=0;
        while(t>0)
        {
            t=t/10;
            c++;
        }
        t=i;
        ans=0;
        while(t)
        {
            rem=t%10;
            mul=1;
            for(j=1;j<=c;j++)
            {
                mul=mul*rem;
            }
            ans=ans+mul;
            t=t/10;
        }
        if(ans==i)
        {
            printf("%d",ans);
        }
    }
    return 0;
}

