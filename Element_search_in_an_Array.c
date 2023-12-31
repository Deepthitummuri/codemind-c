#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]==j)
        {
            printf("True");
            break;
        }
        else
        {
            s++;
        }
    }
    if(s==n)
    {
        printf("False");
    }
    
}
