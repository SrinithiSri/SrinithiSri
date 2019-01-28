#include<stdio.h>
int main()
{
    char a[50];
    int i,c=1;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='.')
        {
            c++;
        }
    }
    printf("line count=%d",c);
    return 0;
}
