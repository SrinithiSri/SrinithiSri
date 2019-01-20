#include <stdio.h>
#include <conio.h>
void main()
{
    int n,i,t,count=0,rem=0,ans=0,mul=1;
    clrscr();
    printf("enter n");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        t=t/10;
        count++;
    }
    t=n;
    while(t>0)
    {
        rem=t%10;
        for(i=1;i<=count;i++)
        {
            mul=mul*rem;
        }
        ans=ans+mul;
        t=t/10;
    }
    mul=1;
    if(ans==n)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
}
