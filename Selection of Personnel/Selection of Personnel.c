#include<stdio.h>
int main()
{
    int n, i, j;

    long long int seven=1, six=1, five=1;

    scanf("%d", &n);

    for(i=n, j=1 ; j<=5 ; )
    {
        five = (five*i)/j;
        i--;
        j++;
    }

    for(i=n, j=1 ; j<=6 ; )
    {
        six = (six*i)/j;
        i--;
        j++;
    }

    for(i=n, j=1 ; j<=7 ; )
    {
        seven = (seven*i)/j;
        i--;
        j++;
    }

    printf("%lld", five+six+seven);

    return 0;
}
