#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);                    ///  a = number of candles
                                              ///   b = number of candles made from "went out candles"
    int remaining=a, ans=0;

    while(remaining/b != 0 )
    {
        ans = ans + (remaining/b)*b ;                       ///  ans increasing because of newly made candles

        remaining = remaining/b + remaining%b ;            ///   remaining candles decreasing gradually
    }

    printf("%d", ans+remaining );

    return 0;
}
