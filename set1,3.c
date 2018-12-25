#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    clrscr();
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=="O"||ch=="U")
    {
        printf("vowel");
    }
    else
    {
        printf("consonant");
    }
return 0;
}
