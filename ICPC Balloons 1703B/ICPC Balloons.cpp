#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, arr[26] = {0}, score = 0, non_zero = 0;
        string s;

        cin >> n >> s;

        for(int i=0 ; i<n ; i++)
        {
            arr[ s[i] - 'A' ]++;
        }

        for(int i=0 ; i<26 ; i++)
        {
            score = score + arr[i];
        }

        for(int i=0 ; i<26 ; i++)
        {
            if( arr[i] != 0 )
            {
                non_zero++;
            }
        }


        cout << score + non_zero << endl;


    }

    return 0;
}
