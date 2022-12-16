#include<stdio.h>
int main()
{
    int n, i, ans=1;

    scanf("%d", &n);

    int hour[n], minute[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%d %d", &hour[i], &minute[i]);

        if( hour[i] == hour[i-1] && minute[i] == minute[i-1] && i>0 )
        {
            ans++;
        }
    }

    printf("%d", ans);

    return 0;
}
