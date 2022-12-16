#include<stdio.h>
int main()
{
     long long int a, b, c, n, big, num;
     int i,t;

     scanf("%d", &t);

     for(i=0 ; i<t ; i++)
     {
         scanf("%lld %lld %lld %lld", &a, &b, &c, &n);

         big = (a>b && a>c) ? a : ((b>c) ? b : c ) ;

         num = n - (big-a) - (big-b) - (big-c);

         if(num < 0 || num%3!=0)
         {
             printf("NO\n");
         }

         else
         {
             printf("YES\n");
         }
     }

     return 0;
}
