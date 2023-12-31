#include<stdio.h>
int main()
{
    int n,i,s=0;
    float p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    p=s/(float)n;
    printf("%0.2f",p);
}
