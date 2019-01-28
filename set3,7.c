#include<stdio.h>
int main()

{
    char a[100];
    int i,l=0,s=0;
    gets(a); 
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            s++;
        }
    }
    if(s==l)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }


    return 0;
}
