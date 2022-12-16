#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int len, Count=0;
        cin >> len;
        int arr[len];

        for(int i=0 ; i<len ; i++)
        {
            cin >> arr[i];
        }

        int smallest = *min_element(arr, arr+len);

        for(int i =0 ; i<len ; i++)
        {
            if(arr[i] > smallest)
            {
                Count++;
            }
        }

        cout << Count << endl;
    }

    return 0;
}

/// Just take the average of the smallest element...

/// every other element that is larger than the smallest one... can be removed
