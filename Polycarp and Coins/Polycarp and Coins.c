#include<stdio.h>
int main()
{
        int t,i;
        long long int n,c1,c2;

        scanf("%d", &t);

        for(i=0 ; i<t ; i++)
        {
                scanf("%lld", &n);

                if(n==1)
                {
                       printf("1 0\n");
                }

                else if(n==2)
                {
                       printf("0 1\n");
                }

                else if(n%3==0)
                {
                       c1=(n/3);
                       c2=c1;
                       printf("%lld %lld\n", c1, c2);
                }

                else if((n%3) != 0)
                {
                       c2=(n/3);
                       c1=c2+1;

                         if( (c1+(2*c2)) ==n )
                         {
                               printf("%lld %lld\n", c1, c2);
                         }

                         else
                         {
                               printf("%lld %lld\n", c2, c1);
                         }
                }


        }

        return 0;


}
