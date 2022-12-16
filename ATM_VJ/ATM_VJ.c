#include<stdio.h>
int main()
{
       int x;
       float y;

       scanf("%d%f", &x, &y);

       if(x%5!=0)
       {
             printf("%.2f", y);
       }

       else if(x%5==0)
       {
             if((x+.50)<=y)
             {
                   printf("%.2f", (y-(x+.50)) );
             }

             else
             {
                   printf("%.2f", y);
             }
       }

       return 0;
}
