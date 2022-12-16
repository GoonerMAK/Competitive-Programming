#include<stdio.h>
int main()
{
      int n,magnet,group=0,temp=0;
      scanf("%d", &n);

      for(int i=0 ; i<n ; i++)
      {
            scanf("%d", &magnet);

            if(magnet != temp)
            {
                group++;
            }
            temp=magnet;
      }

      printf("%d", group);
      return 0;
}
