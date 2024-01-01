#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        i;
        sum=sum+(1.0/i);
        i--;
    }
    printf("%.2f",sum);
}