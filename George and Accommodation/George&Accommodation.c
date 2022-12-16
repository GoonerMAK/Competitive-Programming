#include<stdio.h>
int main()
{
  int n,p,q,i,sum=0;
  scanf("%d", &n);

  for(i=0 ; i<n ; i++)
     {
      scanf("%d %d", &p, &q);

      if((q-p)>=2)
        {
          sum++;
        }

     }

   printf("%d", sum);
   return 0;

}
