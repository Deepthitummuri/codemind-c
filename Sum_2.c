#include<stdio.h>
int main()
{
    int a,b,x,y,i,sum=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    i=a;
    while(i<=b)
    {
        i;
        if(i%x==0&&i%y!=0)
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}