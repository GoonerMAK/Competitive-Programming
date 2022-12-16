#include<stdio.h>
int main()
{
    long long int num1, num2, dollar1, dollar2, sum1, sum2, min, max;
    int i, tests;
    scanf("%d", &tests);

    while(tests--)
    {
         scanf("%lld %lld", &num1, &num2);
         scanf("%lld %lld", &dollar1, &dollar2);

         (num1<num2) ? (min=num1, max=num2) : (min=num2, max=num1) ;

         sum1 = (min*dollar2) + ( (max-min)*dollar1) ;
         sum2 =  (max+min)*dollar1 ;

         printf("%lld\n", (sum1<sum2)? sum1 : sum2 );
    }

    return 0;
}
