#include<stdio.h>
int main()
{
      int i,t;
      long long int n,s1,s=0;

      scanf("%d", &t);

      for(i=1 ; i<=t ; i++)
      {
             scanf("%lld", &n);

             while(1)
             {
                   s1=n%10;
                   s=s+s1;
                   n=n/10;

                   if(n<=0)
                   {
                       break;
                   }
             }
             printf("%lld\n", s);
             s=0;
      }

      return 0;
}
