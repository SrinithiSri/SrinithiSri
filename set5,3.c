#include<stdio.h>
int main()
{
    char a[50],b[50];
    int c=0,i;
    for(i=0;i<50;i++)
    {
        a[i]='\0';
    }
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
    c++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        a[c]=b[i];
        c++;
    }
    puts(a);
    return 0;
}
