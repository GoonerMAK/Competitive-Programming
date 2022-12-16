#include<stdio.h>
int main()
{
    int n1, n2, k1, k2;                             /// n1 = n2 = total amount of balls   k1 = k2 = upto how mane balls can one throw away
    scanf("%d %d %d %d", &n1, &n2, &k1, &k2);

    n1>n2 ? printf("First") : printf("Second");     /// Logic = No matter how big k1 or k2 is... a player can always take only one ball and throw it away

    return 0;
}
