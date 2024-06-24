#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
  
    while(t--)
    {
        int arr[3], max_val = 0, min_val = 11;
        for(int i=0 ; i<3 ; i++)
        {
            cin >> arr[i];
            if(arr[i] > max_val)
            {
                max_val = arr[i];
            }
            if(arr[i] < min_val)
            {
                min_val = arr[i];
            }
        }

        cout << max_val - min_val << endl;    
    }
    return 0;
}