#include<stdio.h>
int main()
{
     int t,a,b,s1,s2,i;

     scanf("%d", &t);

     for(i=0 ; i<t ; i++)
     {
         scanf("%d %d", &a, &b);

         if(a>=b)
         {
              s1=a-b;
              if(s1%10==0)
              {
                s2=(s1/10);
              }

              else
              {
                s2=(s1/10)+1;
              }
         }

         else
         {
              s1=b-a;
              if(s1%10==0)
              {
                 s2=(s1/10);
              }

              else
              {
                 s2=(s1/10)+1;
              }

         }

        printf("%d\n", s2);

     }



    return 0;

}
