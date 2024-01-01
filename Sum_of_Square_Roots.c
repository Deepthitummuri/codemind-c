#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sum=0;
    scanf("%d%d",&a,&b);
    i=a;
    while(i<=b)
    {
        i;
        sum=sum+sqrt(i);
        i++;
    }
    printf("%.2f",sum);
}