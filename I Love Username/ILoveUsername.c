#include<stdio.h>
int main()
{
      int n,i,a,s=0;
      int big=0,small=10001;

      scanf("%d", &n);

      for(i=1 ; i<=n ; i++)
      {
          scanf("%d", &a);


          if(a>big)
          {
            big=a;
            if(i>=2)
            {
                s++;
            }
          }

          if(a<small)
          {
            small=a;
            if(i>=2)
            {
                s++;
            }
          }


      }

      printf("%d", s);

      return 0;
}
