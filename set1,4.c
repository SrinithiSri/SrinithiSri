#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='A'&&ch<="Z")||(ch>='a'&&ch<='z'))
    {
        printf("alphabet");
    }
    else
    {
        printf("no");
    }
    getch();
}
