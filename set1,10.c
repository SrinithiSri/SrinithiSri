#include <stdio.h>
#include<conio.h>
void main()
{
    int a,rem,c=0;
    printf("enter a");
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        c++;
    }
    printf("%d",c);
    getch();
}

