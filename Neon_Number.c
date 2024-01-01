  #include<stdio.h>
  int main()
  {
      int n,r,m,sum=0,t;
      scanf("%d",&n);
      t=n;
      m=n*n;
      while(m!=0)
      {
          r=m%10;
          sum=sum+r;
          m=m/10;
      }
      if(t==sum)
      printf("Neon Number");
      else
      printf("Not Neon Number");
  }