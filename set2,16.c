#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,i,j;
    clrscr();
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i/2;j++)
        {
            if(i%j!=0)
            {
                printf("%d",j);
            }
        }
    }
    getch();
}
