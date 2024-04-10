#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while(t--)
    {
        int n, single, promotional, ans;
        cin >> n >> single >> promotional;

        ans = (n/2) * min(single*2, promotional);
        ans += (n%2) * single;

        cout << ans << endl;
    }

    return 0;
}