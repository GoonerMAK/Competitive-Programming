#include<bits/stdc++.h>
using namespace std;
int main()
{
    string table, hand;
    cin >> table;

    for(int i=1 ; i<=5 ; i++)
    {
        cin >> hand;

        if(table[0] == hand[0] || table[1] == hand[1])       /// Either the RANK has to match or the SUIT has to match
        {
            puts("YES");
            return 0;
        }
    }

    puts("NO");
    return 0;
}
