#include<stdio.h>
int main()
{
    int year,a,b,c,d,n_year;
    scanf("%d", &year);

    while(4)
    {
        year++;
        n_year=year;
        a=year%10;
        year=year/10;
        b=year%10;
        year=year/10;
        c=year%10;
        year=year/10;
        d=year;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            {
            printf("%d", n_year);
            break;
            }
         year=n_year;
    }
    return 0;
}
