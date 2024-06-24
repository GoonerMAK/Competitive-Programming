#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int omissions, total_plays;
        cin >> omissions >> total_plays;

        int smallest_omission;                      //  Since we only need the first entry (The smallest one)
        cin >> smallest_omission;

        for(int i=0 ; i<(omissions-1) ; i++)
        {
            int mock_inputs;
            cin >> mock_inputs;
        }

        vector<int> players(total_plays);
        vector<int> answers(total_plays);

        for(int i=0 ; i<total_plays ; i++)
        {
            cin >> players[i];
            if(players[i] < smallest_omission)              //  If the number of players are smaller than the smallest omission point
            {
                answers[i] = players[i];
            }

            else                                        //  Omits all players after the smallest omission point 
            {
                answers[i] = smallest_omission - 1;
            }
        }

        for(int i=0 ; i<answers.size() ; i++)
        {
            cout << answers[i] << " ";
        }

        cout << endl;
    }

    return 0;
}