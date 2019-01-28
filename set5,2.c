#include<stdio.h>
int main()
{
    char a[50],b[50];
    int n=0,c=0,i;
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0';i++)
    {
    c++;
    }
    for(i=0;a[i]!='\0';i++)
    {
        n++;
    }
    if(c>n)
    {
        puts(a);
    }
    else if(c<n)
    {
       puts(b);
    }
    else
    {
        puts(a) || puts(b);
    }
    
    return 0;
}
