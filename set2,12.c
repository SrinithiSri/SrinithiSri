#include <stdio.h>
int main()
{
    int n,rem,pal=0,i,temp;
    printf("enter n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        pal=pal*10+rem;
        n=n/10;
    }
    if(temp==pal)
    {
        printf("palindrome");
    }
    else
    {
        printf("not");
    }
    return 0;
}
