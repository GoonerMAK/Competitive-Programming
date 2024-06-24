#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
  
    while(t--)
    {
        int n, updates;
        cin >> n >> updates;

        string s1, s2; 
        cin >> s1;

        set<int> update_set;

        for(int i=0 ; i<updates ; i++)
        {
            int value;
            cin >> value;
            update_set.insert(value);
        }

        vector<int> arr(update_set.begin(), update_set.end());
        sort(arr.begin(), arr.end());

        cin >> s2;

        sort(s2.begin(), s2.end());

        for(int i=1, j=1 ; i<=n ; i++)
        {
            if(update_set.find(i) != update_set.end())
            {
                cout << s2[j-1];
                j++;
            }
            else
            {
                cout << s1[i-1];
            }
        }
        cout << endl;
    }
    return 0;
}