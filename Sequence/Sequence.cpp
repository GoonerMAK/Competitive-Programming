#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len;
    cin >> len;
    int arr[len];

    for(int i=0 ; i<len ; i++)
    {
         cin >> arr[i];
    }

    int max_arr = *max_element(arr, arr+len);
    int min_arr = *min_element(arr, arr+len);

    int difference = max_arr - min_arr;

    cout << difference*len << endl;

    return 0;
}

