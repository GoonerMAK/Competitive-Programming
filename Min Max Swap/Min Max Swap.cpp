#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
		cin >> n;

		int a[n], b[n], x=0, y=0;
		for(int i=0 ; i<n ; i++)
        {
            cin >> a[i];
        }

		for(int i=0 ; i<n ; i++)
		{
			cin >> b[i];

			x=max(x, max(a[i], b[i]) );

			y=max(y, min(a[i], b[i]) );
		}

		cout << x*y << endl;
    }
    return 0;
}
