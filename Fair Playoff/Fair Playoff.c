#include<stdio.h>
int main()
{
       int s1,s2,s3,s4,t,i,n;

       scanf("%d", &t);

       for(i=0 ; i<t ; i++)
       {
             scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

               if(s1>s2 && s1>s3 && s1>s4)
               {
                    n=s1;
               }
               if(s2>s1 && s2>s3 && s2>s4)
               {
                    n=s2;
               }
               if(s3>s1 && s3>s2 && s3>s4)
               {
                    n=s3;
               }
               if(s4>s1 && s4>s2 && s4>s3)
               {
                    n=s4;
               }
//             printf("%d\n", n);



            if(s1==n)
            {
                     if(s2>s3 && s2>s4)
                     {
                           printf("NO\n");
                     }
                     else
                     {
                           printf("YES\n");
                     }
            }

            else if(s2==n)
            {
                     if(s1>s3 && s1>s4)
                     {
                           printf("NO\n");
                     }
                     else
                     {
                           printf("YES\n");
                     }
            }

            else if(s3==n)
            {
                     if(s4>s1 && s4>s2)
                     {
                           printf("NO\n");
                     }
                     else
                     {
                           printf("YES\n");
                     }
            }

            else if(s4==n)
            {
                     if(s3>s1 && s3>s2)
                     {
                           printf("NO\n");
                     }
                     else
                     {
                           printf("YES\n");
                     }
            }


       }

       return 0;
}
