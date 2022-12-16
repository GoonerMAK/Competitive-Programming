#include<stdio.h>
int main()
{
       int n,i;

       scanf("%d", &n);

       if(n>1)
       {
             while(n>=1)
             {
                  printf("%d ", n--);
             }
       }

       else
       {
             printf("-1");
       }

       return 0;
}
