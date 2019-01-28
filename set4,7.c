#include<stdio.h>
int main()
{
    char a[100];
    int i,c=0,s=0;
    gets(a); 
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            s++;
        }
    }
    if(s==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


    return 0;
}
