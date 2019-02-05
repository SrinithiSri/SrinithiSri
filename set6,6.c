#include<stdio.h>
int main()
{
    char a[20];
 int i,flag=0,c=0;
 scanf("%s",a);
 for(i=0;a[i]!='\0';i++)
 {
     if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
     {
         flag=1;
     }
     if(a[i]>='0' && a[i]<='9')
     {
         c=1;
     }
 }
 if(flag==1 && c==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
return 0;
}
