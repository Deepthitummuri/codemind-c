#include<stdio.h>
int main()
{
    int x,y,a,b,m,c,d,n;
    scanf("%d%d",&x,&y);
    a=500-(x*2);
    b=1000-(x+y)*4;
    m=a+b;
    c=500-(x+y)*2;
    d=1000-(4*y);
    n=c+d;
    if(m>n)
    {
        printf("%d",m);
    }
    else if(n>m)
    {
        printf("%d",n);
    }
    else if(m=n)
    {
        printf("%d",m);
    }
}