#include<stdio.h>
int main()
{
       float n,a,b,s;
       float c;

       scanf("%f%f%f%f",&n, &a, &b, &s);
       c= ((s-(a+b))/(n-2));

//       printf("%f\n", c);

       if(n==1)
       {
          if(a!=s || b!=s)
          {
              printf("NO");
          }

          else
          {
              printf("YES");
          }
       }

       else if(n==2)
       {
           if((a+b)!=s)
           {
               printf("NO");
           }
           else
           {
               printf("YES");
           }
       }

       else
       {
           if(a<=c && c<=b)
           {
                printf("YES");
           }

           else
           {
                printf("NO");
           }
       }

       return 0;
}
