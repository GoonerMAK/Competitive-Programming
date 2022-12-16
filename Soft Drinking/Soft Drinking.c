#include<stdio.h>
int main()
{
      int n, k, l, c, d, p, nl, np;
      int x, y, z;

      scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

      x=((k*l)/nl);
      y=c*d;
      z=p/np;

      if(x<y && x<z)
      {
          printf("%d", x/n);
      }

      else if(y<z)
      {
          printf("%d", y/n);
      }

      else
      {
          printf("%d", z/n);
      }

     return 0;
}
