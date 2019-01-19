#include <stdio.h>
#include<conio.h>
void main()
{
    int n,k,i,sum=0,a[20];
    clrscr();
    printf("enter n");
    scanf("%d",&n);
    printf("\n enter k");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
getch();
}

