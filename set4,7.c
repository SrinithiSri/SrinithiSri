#include<stdio.h>
int main()
{
    if(s1&&s2>=0 && s1&&s2<=100000)
    {
    long int s1,s2,t;
    scanf("%ld %ld",&s1,&s2);
    t=s1;
    s1=s2;
    s2=t;
    printf("%ld %ld",s1,s2);
    }
    return 0;
}

 
