#include<stdio.h>
int main()
{
    int a,b,c;
    int big,small;
    scanf("%d %d %d", &a, &b, &c);
    big = ((a>b && a>c) ? a : ((b>a && b>c)? b : c ));
    small = ((a<b && a<c) ? a : ((b<a && b<c)? b : c ));
    printf("%d", big-small);
}
