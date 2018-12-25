#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter n");
scanf("%d",&n);
if(n%2==0)
{
printf("even");
}
else if(n%2==1)
{
printf("odd");
}
else
{
printf("invalid");
}
getch();
}
