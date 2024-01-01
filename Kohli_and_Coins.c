#include<stdio.h>
int main()
{
    int x,a,b,c,d;
    scanf("%d",&x);
    a=x/10;
    b=x%10;
    c=b/5;
    d=a+c;
    if(x%10==0||x%5==0)
    {
        printf("%d",d);
    }
    else
    {
        printf("-1");
    }
}