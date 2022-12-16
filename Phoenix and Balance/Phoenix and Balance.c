#include<stdio.h>
int main()
{
      int t,i,n;
      int sum=0,jump=1;
      scanf("%d", &t);

      for(i=0 ; i<t ; i++)
      {
             scanf("%d", &n);

             while(n>0)
             {
                  n=n-2;
                  sum=sum+(jump*2);
                  jump=(jump*2);
             }

             printf("%d\n", sum);
             sum=0;
             jump=1;
      }
      return 0;
}
