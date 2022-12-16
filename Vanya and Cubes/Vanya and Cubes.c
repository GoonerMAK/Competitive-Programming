#include<stdio.h>
int main()
{
      int n,c=0,s=0,b=1;

      scanf("%d", &n);

      while(n>=0)
      {
           s=s+b;
           b++;
           n=n-s;
           c++;
      }

      printf("%d", c-1);

      return 0;

}
