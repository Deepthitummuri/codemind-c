#include<stdio.h>
int main()
{
    int n,i,s=0,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            if(a[i]%2!=0)
            {
                s+=1;
            }
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            t+=1;
        }
    }
    if(t==s)
    {
        printf("True");
    }
    else
    {
    printf("False");
}
}
