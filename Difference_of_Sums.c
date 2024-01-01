#include<stdio.h>
int main()
{
    int n,i,sum=0,sum1=0,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        i;
        sum=sum+i;
        sum1=sum1+(i*i);
    }
    diff=(sum*sum)-sum1;
    printf("%d",diff);
}