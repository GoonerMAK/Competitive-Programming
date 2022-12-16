#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double x1, x2;

    x1= (-b-(sqrt( (b*b) - 4*a*c) ) )/(2*a);
    x2= (-b+(sqrt( (b*b) - 4*a*c) ) )/(2*a);

    if(x1>x2)
    {
        printf("%lf\n%lf", x1, x2);
    }

    else
    {
        printf("%lf\n%lf", x2, x1);
    }

    return 0;

}
