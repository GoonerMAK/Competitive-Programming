#include<stdio.h>
int main()
{
       long long int L,R,sum=0,r,temp,total=0;
       int t,i;

       scanf("%d", &t);

       while(t--)
       {
             scanf("%lld%lld", &L, &R);

             while(1)
             {
                     temp=L;

                     if(L>R)
                     {
                         break;
                     }

                      while(temp!=0)
                      {
                          r=(temp%10);
                          sum=(sum*10)+r;
                          temp=temp/10;
                      }

                      if(L==sum)
                      {
                           total=total+L;
                      }
                      L++;

             }

             printf("%lld\n", total);
                     total=0;

       }

     return 0;
}
