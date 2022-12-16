#include<stdio.h>
#include<math.h>
int main()
{
    int cards, jokers, players, t, in_hand;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &cards, &jokers, &players);

        in_hand = cards/players;                 /// amount of cards in hand

        if(jokers==0)
        {
            printf("%d\n", 0);
        }

        else if( jokers <= in_hand )
        {
            printf("%d\n", jokers);
        }

        else if( jokers > in_hand )
        {
            int ans= in_hand -(ceil)(jokers - in_hand) / (players-1);        ///  Why divide by (players-1)? --> Greedy
                                                                             ///  Ceil function --> turns 0.5 to 1
            printf("%d\n", ans);
        }

    }

    return 0;
}


///         Example Input           ///

///           for 12 5 3
///
///            0  --> 0
///            1  --> 1
///            2  --> 2
///            3  --> 3
///            4  --> 4
///            5  --> 3
///            6  --> 3
///            7  --> 2
///            8  --> 2
///            9  --> 1
///            10 --> 1
///            11 --> 0
///            12 --> 0




