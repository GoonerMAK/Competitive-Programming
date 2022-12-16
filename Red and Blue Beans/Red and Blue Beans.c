#include<stdio.h>
int main()
{
        int t,i;
        long long int r,b,d,b1,r1;

        scanf("%d", &t);

        for(i=0 ; i<t ; i++)
        {
              scanf("%lld %lld %lld", &r, &b, &d);

              if(r>b)
              {
                     b1=1;
                     if(r%b==0)
                     {
                           r=r/b;
                           if((r-b1)<=d)
                           {
                             printf("YES\n");
                           }
                           else
                           {
                             printf("NO\n");
                           }
                     }
                     else
                     {
                           r=(r/b)+1;
                           if((r-b1)<=d)
                           {
                             printf("YES\n");
                           }
                           else
                           {
                             printf("NO\n");
                           }
                     }
              }

              else if(b>r)
              {
                     r1=1;
                     if(b%r==0)
                     {
                           b=b/r;
                           if((b-r1)<=d)
                           {
                             printf("YES\n");
                           }
                           else
                           {
                             printf("NO\n");
                           }
                     }
                     else
                     {
                           b=(b/r)+1;
                           if((b-r1)<=d)
                           {
                             printf("YES\n");
                           }
                           else
                           {
                             printf("NO\n");
                           }
                     }
              }

              else if(r==b)
              {
                    printf("YES\n");
              }


        }

    return 0;
}
