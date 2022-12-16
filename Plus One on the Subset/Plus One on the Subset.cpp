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

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        int min_n = *min_element(arr, arr+n);
        int max_n = *max_element(arr, arr+n);

        cout << max_n - min_n << endl;
    }

    return 0;
}
