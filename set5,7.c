#include<stdio.h>
int main()
{
     long int n;
    int c=0,a[100],t,i,j;
    scanf("%ld",&n);
    if(n>=0 && n<10000)
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
       }
    }
    printf("lowest number=%d\nhighest number=%d",a[0],a[n-1]);
    }
   return 0;
}
