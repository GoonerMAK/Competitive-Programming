#include<stdio.h>
int main()
{
    int n, ans[] = {6, 8, 4, 2};

    scanf("%d", &n);

    printf("%d", (n==0)? 1 : ans[n%4] );            ///   patterns of 8^n mod 10

    return 0;
}


///       8^1 mod 10 = 8
///       8^2 mod 10 = 4
///       8^3 mod 10 = 2
///       8^4 mod 10 = 6
///       8^5 mod 10 = 8 (again)
///       8^6 mod 10 = 4
///       8^7 mod 10 = 2
///       8^8 mod 10 = 6


///     The last digit of the power of 1378 and 8 are the same   ///
