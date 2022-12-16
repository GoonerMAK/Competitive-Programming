#include<stdio.h>
int main()
{
        long long int d1,d2,d3;
        long long int r1,r2,r3,r4,r5,r6;

        scanf("%lld %lld %lld", &d1, &d2, &d3);

        r1=d1+d1+d2+d2;
        r2=d1+d3+d2;
        r3=d1+d3+d3+d1;
        r4=d2+d3+d1;
        r5=d2+d3+d3+d2;
        r6=d2+d2+d1+d1;

        if(r1<=r2 && r1<=r3 && r1<=r4 && r1<=r5 && r1<=r6)
        {
             printf("%lld", r1);
        }

        else if(r2<=r1 && r2<=r3 && r2<=r4 && r2<=r5 && r2<=r6)
        {
            printf("%lld", r2);
        }

        else if(r3<=r1 && r3<=r2 && r3<=r4 && r3<=r5 && r3<=r6)
        {
            printf("%lld", r3);
        }

        else if(r4<=r2 && r4<=r3 && r4<=r1 && r4<=r5 && r4<=r6)
        {
            printf("%lld", r4);
        }

        else if(r5<=r2 && r5<=r3 && r5<=r1 && r5<=r4 && r5<=r6)
        {
            printf("%lld", r5);
        }

        else if(r6<=r2 && r6<=r3 && r6<=r1 && r6<=r4 && r6<=r5)
        {
            printf("%lld", r6);
        }

        return 0;
}
