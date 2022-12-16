#include<stdio.h>
int main()
{
       int t,a,b,i;

       scanf("%d", &t);

       for(i=0 ; i<t ; i++)
       {
            scanf("%d %d", &a, &b);

            if(b>a)
            {
                   if((b-a)%2 !=0)
                   {
                       printf("1\n");
                   }
                   else if((b-a)%2==0)
                   {
                       printf("2\n");
                   }
            }

            else if(a>b)
            {
                   if((a-b)%2 !=0)
                   {
                       printf("2\n");
                   }
                   else if((a-b)%2==0)
                   {
                       printf("1\n");
                   }
            }

            else
            {
                   printf("0\n");
            }


       }


        return 0;
}
