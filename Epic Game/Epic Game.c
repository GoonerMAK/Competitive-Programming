#include<stdio.h>
int main()
{
       int a,b,n,i;
       scanf("%d %d %d", &a, &b, &n);

       for(i=1 ; i<=101 ; i++)
       {

             if((i%2)!=0)
             {
                   if(n%a==0)
                   {
                         n=n-a;
                   }

                   else
                   {
                         n=n-1;
                   }
             }

             else if(i%2==0)
             {
                   if(n%b==0)
                   {
                         n=n-b;
                   }

                   else
                   {
                         n=n-1;
                   }
             }

             if(n<=0)
             {
                    break;
             }



       }

//       printf("%d\n", i);

                   if((i%2)!=0)
                   {
                       printf("0");
                       return 0;
                   }

                   else
                   {
                      printf("1");
                      return 0;
                   }



}
