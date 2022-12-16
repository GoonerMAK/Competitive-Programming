#include<stdio.h>
int main()
{
    long long int n, tasks, sum=0;                   /// n = number of houses
    scanf("%lld %lld", &n, &tasks);

    long long int house[tasks];

    for(int i=0 ; i<tasks ; i++)
    {
        scanf("%lld", &house[i]);                   /// reading house number
    }

    sum = sum + house[0] - 1;

    for(int i=1 ; i<tasks ; i++)
    {
        if(house[i-1] > house[i] )
        {
            sum = sum + n-house[i-1] + house[i];
        }

        else if( house[i] > house[i-1] )
        {
            sum = sum + house[i] - house[i-1];
        }
    }

    printf("%lld", sum);

    return 0;
}


///   because of the 'one way road' we have to consider 2 cases

///   cases: Is the next house in front of us...? or is it behind us?

///   if it's behind us... we have to cross all the houses that's in front of
///   us and then start again from the beginning...   ('one way road')
