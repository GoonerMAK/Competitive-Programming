#include<stdio.h>
int main()
{
      int p,q,r,s;
      int a,b,c;

      scanf("%d%d%d%d", &p, &q, &r, &s);

      if(p>q && p>r && p>s)
      {

         c=p-q;
         b=r-c;
         a=s-c;
      }

      else if(q>r && q>s)
      {

         c=q-p;
         b=r-c;
         a=s-c;
      }

      else if(r>s)
      {

         c=r-p;
         b=q-c;
         a=s-c;
      }

      else
      {

         c=s-p;
         b=q-c;
         a=r-c;
      }

    printf("%d %d %d", a, b, c);

    return 0;

}
