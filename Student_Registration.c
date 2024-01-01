#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    int n,m,k,lo;
    scanf("%d%d%d",&n,&m,&k);
    lo=m-k;
    if(lo>=n)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    }
}