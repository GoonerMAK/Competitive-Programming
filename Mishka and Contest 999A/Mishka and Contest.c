#include<stdio.h>
int main()
{
    int n, skill, i, ans=0, count=0;
    scanf("%d %d", &n, &skill);

    int problems[n];

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &problems[i]);
    }

    for(i=0 ; i<n ; i++)
    {
        if( problems[i] > skill )
        {
            count++;
            break;
        }
        ans++;
    }

    for(i=n-1 ; i>=0 ; i--)
    {
        if( problems[i] > skill )
        {
            count++;                                 ///  Incrementing count... which means there's at least one problem that he can't solve
            break;
        }
        ans++;
    }

    if(count==0)                                   ///  If count is zero... that means that Mishka can solve all the problems
    {
        ans = ans/2;                              ///   That's why we have to divide ans by 2
    }

    printf("%d", ans);

    return 0;
}
