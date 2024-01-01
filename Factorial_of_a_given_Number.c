#include<stdio.h>
int main()
{
    int n,i,mul=1;
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        i;
        mul=mul*i;
        i--;
    }
    printf("%d",mul);
}
