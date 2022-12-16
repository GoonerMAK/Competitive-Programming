#include<stdio.h>
int main()
{
      int n,i;
      char c;

      scanf("%d", &n);

      for(i=0 ; i<n ; i++)
      {
           scanf("%c", &c);
      }
      printf("%d", n+1);
      return 0;
}
