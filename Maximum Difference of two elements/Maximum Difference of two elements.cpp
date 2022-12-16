#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, operations;
        cin >> n >> operations;

        int arr[n];

        for(int i=0 ; i<n ; i++)
        {
            cin >> arr[i];
        }

        int min_num = *min_element(arr, arr+n);
        int max_num = *max_element(arr, arr+n);

        cout << max_num-min_num << endl;
    }

    return 0;
}
