#include <stdio.h>

int main()
{
 int n,power=2,j=1,a[100],i;
 scanf("%d",&n);
 a[0]=2;
 if(n<10000)
 {
 for(i=1;i<n/2;i++)
 {
 power=power*2;
 a[j]=power;
 j++;
 }
 for(i=0;i<j;i++)
 {
     if(a[i]==n)
     {
         printf("%d",a[i-1]);     
         
     }
     
 }
 }
 else
 {
     printf("invalid");
 }
 
 
     return 0;
}
