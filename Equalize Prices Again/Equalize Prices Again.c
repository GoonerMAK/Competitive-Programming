#include<stdio.h>
int main()
{
      int q,n;
      long long int a,s=0;

      scanf("%d", &q);

      while(q--)
      {
               scanf("%d", &n);

               for(int i=0 ; i<n ; i++)
               {
                     scanf("%lld", &a);
                     s=s+a;
               }

               if((s%n)==0)
               {
                     printf("%lld\n", s/n);
               }

               else
               {
                     printf("%lld\n", (s/n)+1);
               }

               s=0;
      }

      return 0;
}
