#include <stdio.h>

int main()
{
    int n,l=0,i;
    scanf("%d",&n);
    if(n>=1 && n<=10)
    {
      for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                l++;
            }
            if(l==2)
            {
                printf("%d",i);
                break;
            }
        
        }
}

    return 0;
}
