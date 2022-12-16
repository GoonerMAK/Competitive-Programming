#include<stdio.h>
int main()
{
     int n,a,i;
     int crime=0,hired=0,untreated=0;

     scanf("%d", &n);

     for(i=0 ; i<n ; i++)
     {
          scanf("%d", &a);

          if(a>=1)
          {
             hired=hired+a;
          }

          else if(a<0)
          {
             crime++;
          }

          if(crime>hired)
          {
             untreated++;
             crime=0;
          }

          else if(hired>=crime)
          {
             hired=hired-crime;
             crime=0;
          }

     }

   printf("%d", untreated);

   return 0;


}
