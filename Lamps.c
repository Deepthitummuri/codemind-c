#include<stdio.h>
int main()
{
    int n,k,x,y,tx,ty;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    ty=(x*k)+(n-k)*y;
    tx=(x*k)+(n-k)*x;
    if(x>y)
    {
        printf("%d",ty);
    }
    else if(x<y)
    {
        printf("%d",tx);
    }
}