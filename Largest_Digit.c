#include<stdio.h>
int main()
{
    int n,r=0,t=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>t)
        {
            t=r;
        }
        n=n/10;
    }
    printf("%d",t);
}