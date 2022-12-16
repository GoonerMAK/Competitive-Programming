#include<stdio.h>
#include<math.h>
int main()
{
       double n,d,s,p=0;
       int t;

       scanf("%d", &t);

       for(int i=0 ; i<t ; i++)
       {
               scanf("%lf%lf", &n, &d);

               if(d<=n)
               {
                      printf("YES\n");
               }

               else if(d>n)
               {
                      for(int i=1 ; i<d ; i++)
                      {
                          s=ceil(d/(i+1));
//                          printf("%.0lf\n", s);

                          if((s+i)<=n)
                          {
                              p++;
                          }

                      }
//                      printf("%.0lf\n" ,p);
                      if(p>=1)
                      {
                          printf("YES\n");
                      }
                      else
                      {
                          printf("NO\n");
                      }
                      p=0;
               }

       }


    return 0;
}
