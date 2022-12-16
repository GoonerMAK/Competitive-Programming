#include<stdio.h>
int main()
{
    int tests, i;
    scanf("%d", &tests);

    while(tests--)
    {
        int lentgh, n, count=0;                /// n = maximum length of a palindrome substring
        scanf("%d %d", &lentgh, &n);

        while(lentgh--)
        {
            count++;

            printf( count%3 == 1 ? "a" : ( (count%3 == 2) ? "b" : "c" ) );

        }
        printf("\n");
    }

    return 0;
}


///  The length of a palindrome substring can not exceed n...
///  but the minimum length is 1... so, we could just write abcabc, bacbac, abcabc or whatever... (each character is a palindrome) ('a', 'b', 'c' are palindromes)

