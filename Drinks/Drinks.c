#include<stdio.h>
int main()
{
   int n,i,p;
   double s=0;

   scanf("%d", &n);


   for(i=0 ; i<n ; i++)
       {
         scanf("%d", &p);
         s=s+p;
       }

      printf("%.12lf", s/n);

      return 0;
}
