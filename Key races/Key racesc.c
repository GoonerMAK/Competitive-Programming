#include<stdio.h>
int main()
{
    int characters, time1, time2, ping1, ping2;                                 /// time1=time2= time spent on each character

    scanf("%d %d %d %d %d", &characters, &time1, &time2, &ping1, &ping2);

    if( (characters*time1 + 2*ping1) > (characters*time2 + 2*ping2) )
    {
        printf("Second");
    }

    else if( (characters*time1 + 2*ping1) < (characters*time2 + 2*ping2) )
    {
        printf("First");
    }

    else
    {
        printf("Friendship");
    }

    return 0;
}
