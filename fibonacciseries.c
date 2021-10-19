// using iterative ways to find the fibonacci series.
#include<stdio.h>
/**
int fib( int n)
{
    int t0 =0,t1 =1,s=0,i;
    if(n<=1)
    {
        return n;
    }
    for(i=2;i<=n;i++)
    {
        return fib(n-2)+fib(n-1);
        t0 =t1;
        t1 = s;
    }
    return s;
}

int rfib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return rfib(n-2)+rfib(n-1);
    }

}
int F[10];

int mfib(int n)
{
    if(n<=1)
    {
         F[n]=n;
        return n;

    }
    else
    {
        if(F[n-2]==-1)
         F[n-2]=mfib(int n);
         if(F[n-1]==-1)
         F[n-1]=mfib(int n);
         return F[n-2]+F[n-1];
    }
    

}

int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        F[i]=-1;
    }

    printf("%d\n",mfib(10)); // here if you want use iterative function then use fib(10) and to use recursive function put(rfib).
    return 0;

    **/

 

int fib(int n)
{
    int t0=0,t1=1,s=0,i;
    
    if(n<=1) return n;
    
    for(i=2;i<=n;i++)
    {
        s=t0+t1;
        t0=t1;
        t1=s;
    }
    
    return s;
}
int rfib(int n)
{
    if(n<=1)return n;
    return rfib(n-2)+rfib(n-1);
}
int F[10];
int mfib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if(F[n-1]==-1)
    
     F[n-1]=mfib(n-1);
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}
int main()
{
    int i;
    for(i=0;i<10;i++)
        F[i]=-1;
    
    printf("%d \n",mfib(5));
    return 0;
}