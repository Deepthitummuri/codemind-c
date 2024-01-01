#include<stdio.h>
int main()
{
    int a,b,c,t1,t2,t3;
    scanf("%d%d%d",&a,&b,&c);
    t1=a+b;
    t2=b+c;
    t3=c+a;
    if(t1>t2&&t1>t3)
    {
        printf("%d",t1);
    }
    else if(t2>t1&&t2>t3)
    {
        printf("%d",t2);
    }
    else if(t3>t1&&t3>t2)
    {
        printf("%d",t3);
    }
}