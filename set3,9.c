#include<stdio.h>
int main()
{
    int min,hr=0;
    scanf("%d",&min);
    while(min>=60)
    {
        hr=hr+1;
        min=min-60;
    }
    printf("%d %d",hr,min);
return 0;
}

    
