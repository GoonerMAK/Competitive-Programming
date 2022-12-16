#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, reps;
    cin >> n;

    int arr[3] = {0};                 /// arr[0] = chest  ...  arr[1] = biceps  ...  arr[2] = back

    for(int i=0 ; i<n ; i++)
    {
        cin >> reps;

        arr[i%3] += reps;
    }

    cout <<  ( (arr[0] > arr[1] && arr[0] > arr[2]) ? "chest" : ( (arr[1] > arr[2]) ? "biceps" : "back") ) << endl;

    return 0;
}

///   math

///   use of remainder in array indexing
