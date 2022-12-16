#include<stdio.h>
int main()
{
         long long int a,b,s1=1,s2=1,gcd;
         int i;

         scanf("%lld %lld", &a, &b);

         for(i=1 ; i<=a ; i++)
         {
              s1=i*s1;
         }
         for(i=1 ; i<=b ; i++)
         {
              s2=i*s2;
         }
//         printf("s1=%d  s2=%d\n", s1,s2);

         for(i=1 ; i<=s1 && i<=s2 ; i++)
         {
                 if(s1%i==0 && s2%i==0)
                 {
                    gcd=i;
                 }
         }

         printf("%lld", gcd);

         return 0;
}
