#include<stdio.h>
int main()
{
      int i,t,s=0;
      long long int a,b,n;

      scanf("%d", &t);

      for(i=0 ; i<t ; i++)
      {
             scanf("%lld %lld %lld", &a, &b, &n);

           while(1)
            {
                 if(a>n || b>n)
                 {
                     break;
                 }

                 else if(a>=b)
                 {
                     b+=a;
                     s++;
                 }

                 else if(b>a)
                 {
                     a+=b;
                     s++;
                 }

            }

          printf("%d\n", s);

          s=0;
      }

   return 0;
}
