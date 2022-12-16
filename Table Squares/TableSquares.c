#include<stdio.h>
int main()
{
   int i=1,n;
   scanf("%d", &n);

//   while(i<=n)
//   {
//      printf("%d\t%d\n", i, i*i);
//      i++;
//
//
//   }
     for(i=1;i<=n;++i)
     {
         printf("%d    %d\n", i, i*i);

     }

   return 0;
}
