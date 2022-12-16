#include<stdio.h>
int main()
{
      int t,i,h,m,s;

      scanf("%d", &t);

      for(i=0 ; i<t ; i++)
      {
         scanf("%d %d", &h, &m);

         s=((23-h)*60)+(60-m);
         printf("%d\n", s);
      }
      return 0;
}
