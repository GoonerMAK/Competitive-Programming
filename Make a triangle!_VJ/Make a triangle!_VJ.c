#include<stdio.h>
int main()
{
      int a,b,c;

      scanf("%d%d%d", &a, &b, &c);

      if(a>b && a>c)
      {
            if(a<(b+c))
            {
                 printf("0");
            }
            else
            {
                 printf("%d", (a-(b+c)+1));
            }
      }

      else if(b>c)
      {
            if(b<(a+c))
            {
                 printf("0");
            }
            else
            {
                 printf("%d", (b-(a+c)+1));
            }
      }

      else
      {
            if(c<(a+b))
            {
                 printf("0");
            }
            else
            {
                 printf("%d", (c-(a+b)+1));
            }
      }


      return 0;
}
