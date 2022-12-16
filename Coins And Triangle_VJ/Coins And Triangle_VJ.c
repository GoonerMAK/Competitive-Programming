#include<stdio.h>
int main()
{
     int i,t;
     long long int n,s=0;

     scanf("%d", &t);

     while(t--)
     {
           scanf("%lld", &n);

           for(i=1; ; i++)
           {
                  n=n-i;
                  if(n>=0)
                  {
                      s++;
                  }
                  if(n<0)
                  {
                      break;
                  }
           }

           printf("%lld\n", s);
           s=0;
     }
     return 0;

}
