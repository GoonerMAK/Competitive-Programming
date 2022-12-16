///     Remainder Concept    ///

#include<stdio.h>
int main()
{
    long long int swimmer1, swimmer2, swimmer3, me, ans;
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
         scanf("%lld %lld %lld %lld", &me, &swimmer1, &swimmer2, &swimmer3);

         if(me%swimmer1==0 || me%swimmer2==0 || me%swimmer3==0)
         {
             printf("0\n");
         }

         else
         {
             swimmer1 = swimmer1 - (me%swimmer1);
             swimmer2 = swimmer2 - (me%swimmer2);
             swimmer3 = swimmer3 - (me%swimmer3);

             ans = (swimmer1<swimmer2 && swimmer1<swimmer3) ? swimmer1 : ( (swimmer2<swimmer3)? swimmer2 : swimmer3 );

             printf("%lld\n", ans);
         }

    }

    return 0;
}

