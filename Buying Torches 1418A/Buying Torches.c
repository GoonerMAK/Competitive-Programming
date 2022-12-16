#include<stdio.h>
#include<math.h>
int main()
{
    long long int sticks, coals, torches, sticks_needed;
    int tests;
    scanf("%d", &tests);

    while(tests--)
    {
        scanf("%lld %lld %lld", &sticks, &coals, &torches);

        sticks_needed =   ( ( (torches*coals)+torches-1) % (sticks-1) ) == 0 ? ( (torches*coals)+torches-1) / (sticks-1) : ( ( (torches*coals)+torches-1) / (sticks-1) ) + 1 ;

        printf("%lld\n", sticks_needed+torches ) ;
    }

    return 0;
}


///     For example, 12 torches need 12 coals and 12 sticks
///     1 coal can be obtained by trading a particular number of sticks
///     one initially starts with 1 stick in hand...
///     which means one needs  (torches*coals) + torches - 1  new sticks and the first trade gives him/her (sticks-1) new sticks


///     Explanation of an example     ///

///     42 13 24

///     new sticks needed = 24*13 + 24 - 1 = 335

///     first trade gives us 42-1 = 41 new sticks

///     number of times we need to perform the 1st trade = ceil(335/41) = ceil(8.17) = 9

///     total number of trades = 9 + 24 = 33


