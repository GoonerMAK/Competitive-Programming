#include<stdio.h>
int main()
{
   int n,a,i,sum=0;

   scanf("%d", &n);

   for(i=0 ; i<n ; i++)
   {
       scanf("%d", &a);

       if(a==1)
          sum++;
   }
     if(sum>0)
        printf("HARD");
     else
        printf("EASY");

//    printf("\n%d", sum);

   return 0;

}
