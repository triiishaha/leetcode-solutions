

int fib(int n)
{
    int i,c;
    int a=0;
    int b= 1;
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    for(i=1;i<=n-1;i++)
    {
       c=a+b;
       a=b;
       b=c;
    }
    return c;
}
