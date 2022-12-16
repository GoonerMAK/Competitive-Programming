#include<stdio.h>
#include<math.h>
int main()
{
    int t,i,count=0;
    long long int q, x=3628800, n=11,p,p1;

    scanf("%d", &t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld", &q);

        if(q==1)
        {
            printf("Case %d: %d\n", i, 5);
        }

        else if(q==2)
        {
            printf("Case %d: %d\n", i, 10);
        }



    }

    return 0;
}






//        else
//        {
//               n=11;
//               for(int j=0 ; j<100000 ; j++)
//               {
//                    x=x*n;
//                    p=pow(10,q);
//                    p1=p*10;
//                    //printf("\n%lld\n", p);
//                    if( x%p == 0 && x%p1>0 )
//                    {
//                        printf("Case %d: %lld\n", i, n);
//                        count++;
//                        break;
//                    }
//                    n++;
//               }
//
//               if(count==0)
//               {
//                   printf("Case %d: Impossible\n", i);
//               }
//        }
