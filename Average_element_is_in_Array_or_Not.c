#include<stdio.h>
int main()
{
    int n,i,s=0,b,c=0;
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
    b=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
