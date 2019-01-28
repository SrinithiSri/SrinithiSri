#include<stdio.h>
int main()
{
    int a[10],i,sum=0,n;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("average=%f",avg);
    return 0;
    
}
