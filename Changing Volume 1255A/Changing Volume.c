#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int current, desired, sum, difference;

        scanf("%d %d", &current, &desired);

        difference=abs(current-desired);

        sum = difference/5 + (difference%5)/2 + (difference%5)%2;           /// use of remainder(%)

        printf("%d\n", sum);
    }

    return 0;
}
