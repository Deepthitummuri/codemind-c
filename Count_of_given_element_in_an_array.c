#include<stdio.h>
int main()
{
    int n,i,s=0,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(a[i]==p)
        {
            s++;
        }
    
    }
    printf("%d",s);
}