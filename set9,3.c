#include <stdio.h>
int main()
{
     char ch;
     int a,b;
     scanf("%d",&a);
     scanf("%c",&ch);
     scanf("%d",&b);
     switch(ch)
     {
         case '/':
         printf("%d",a/b);
         break;
         case '%':
         if(a<b)
         {
             printf("%d",a);
         }else
         {
         printf("%d",a%b);
         }
         break;
         default:
         printf("invalid");
         break;
        }
       return 0;
}
