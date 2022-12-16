#include<stdio.h>
int main()
{
    long long int A,B,x,y,z,Yellow,Blue;

    scanf("%lld%lld", &A, &B);


    scanf("%lld%lld%lld", &x, &y, &z);

    Yellow=(x*2)+y;
    Blue=(z*3)+y;

    if(A>=Yellow && B>=Blue)
    {
        printf("%d", 0);
        return 0;
    }

    if(A<Yellow && B<Blue)
    {
        printf("%lld", ((Yellow-A)+(Blue-B)));
        return 0;
    }

    if(A>=Yellow && B<Blue)
    {
        printf("%lld", (Blue-B));
        return 0;
    }

    if(B>=Blue && A<Yellow)
    {
        printf("%lld", (Yellow-A));
        return 0;
    }


}
