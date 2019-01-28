#include<stdio.h>
int main()
{
    long int s1,s2;
    
    if(s1&&s2>=0 && s1&&s2<=100000)
    {
    scanf("%ld %ld",&s1,&s2);
    s1=s1^s2;
    s2=s1^s2;
    s1=s1^s2;
    printf("%ld %ld",s1,s2);
    
    }
    return 0;
}
