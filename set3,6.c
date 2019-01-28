int main()
{
    long int n,a[100000],t;
    scanf("%ld",&n);
    if(n>=1 && n<=100000)
    {
    for(long int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
        for(long int i=0;i<n;i++)
        {
            for(long int j=i+1;j<n;j++)
           
           {
               if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
           }
        
            printf("%ld\n",a[i]);
    }
    }
    return 0;
}
