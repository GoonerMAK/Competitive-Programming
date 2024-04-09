#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string team;
    cin >> t;

    map<string, int> teamOccurrences;

    for(int i=0 ; i<t ; i++)
    {
        cin >> team;
        teamOccurrences[team]++;
    }

    if (t == 1)                              // If only one team scored
    {
        cout << team << endl;
        return 0;
    }

    // Loop to figure out max occurrences
    auto max_occurrences = teamOccurrences.begin();
    for (auto it = teamOccurrences.begin(); it != teamOccurrences.end(); ++it) 
    {
        if (it->second > max_occurrences->second) 
        {
            max_occurrences = it;
        }
    }

    cout << max_occurrences->first << endl;

    return 0;
}