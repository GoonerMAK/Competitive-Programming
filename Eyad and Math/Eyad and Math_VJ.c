#include<stdio.h>
#include<math.h>
int main()
{
     int t,i;
     long long int a,b,c,d,s1,s2;

     scanf("%d", &t);

     for(i=0 ; i<t ; i++)
     {
                scanf("%lld%lld%lld%lld", &a, &b, &c, &d);

                s1=pow(a,b);
                s2=pow(c,d);

                printf("%lld\n", s1);
                printf("%lld\n", s2);

                if(s1<s2)
                {
                    printf("<\n");
                }
                else
                {
                    printf(">\n");
                }

                s1=0;
                s2=0;
     }


     return 0;
}
