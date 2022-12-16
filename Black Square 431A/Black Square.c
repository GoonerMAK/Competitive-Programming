#include<stdio.h>
int main()
{
    int a1, a2, a3, a4;                /// a1, a2, a3, a4 = calories wasted for each strip
    int arr[4] = {0};                 ///  to store counts of 1s, 2s, 3s and 4s
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    char strips[100001];
    scanf("%s", strips);

    for(int i=0 ; strips[i] != '\0' ; i++)
    {
        arr[strips[i] - '1']++;                     ///  populating the array with the counts of 1s, 2s, 3s and 4s
    }

    printf("%d", a1*arr[0] + a2*arr[1] + a3*arr[2] + a4*arr[3] );

    return 0;
}
