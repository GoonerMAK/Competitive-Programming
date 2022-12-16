#include<stdio.h>
int main()
{
       int t,i,a,b,sum;
       scanf("%d", &t);

       for(i=0 ; i<t ; i++)
       {
              scanf("%d %d", &a, &b);

              if(a==b)
              {
                   sum=(a*2)*(a*2);
              }

              else if(a>b)
              {
                     if((b*2)>=a)
                     {
                         sum=(b*2)*(b*2);
                     }

                     else
                     {
                         sum=(a*a);
                     }
              }

              else
              {
                     if((a*2)>=b)
                     {
                         sum=(a*2)*(a*2);
                     }

                     else
                     {
                         sum=(b*b);
                     }
              }

              printf("%d\n", sum);
              sum=0;
       }

       return 0;
}
