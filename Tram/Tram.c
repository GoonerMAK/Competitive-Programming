#include<stdio.h>
int main()
{
    int exit,enter,big=0,cap=0,i,n;
    scanf("%d", &n);

    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d", &exit, &enter);
        cap=(cap-exit)+enter;

        if(cap>=big)
        {
            big=cap;
        }

    }
    printf("%d", big);
    return 0;
}
