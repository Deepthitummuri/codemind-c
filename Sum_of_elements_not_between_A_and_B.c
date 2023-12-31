#include<stdio.h>
int main()
{
    int n,i,s=0,arr,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&arr,&b);
    for(i=0;i<n;i++)
    {
        if(a[i]<arr || a[i]>b)
        {
        s=s+a[i];
        }
    }
    printf("%d",s);
}