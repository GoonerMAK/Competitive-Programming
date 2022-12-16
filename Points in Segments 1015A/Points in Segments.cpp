#include<iostream>
using namespace std;
int main()
{
    int n, bound, Count=0, l, r;         /// l = left endpoint, r = right endpoint
    int i, arr[101] = {0};              ///  upper bound can not be larger than 100

    cin >> n >> bound;

    while(n--)
    {
        cin >> l >> r;                /// l = left endpoint, r = right endpoint

        for(i=l ; i<=r ; i++)
        {
            arr[i]=1;                ///  if a point exists then we are changing it's value to 1
        }
    }

    for(i=1 ; i<=bound ; i++)
    {
        if(arr[i] != 1)             /// if the value isn't 1 (basically 0) that means that particular point doesn't belong to any of the segments
        {
            Count++;
        }
    }

    cout << Count << endl;           ///  count = number of points that don't belong to any of the segments

    for(i=1 ; i<=bound ; i++)
    {
        if(arr[i] != 1)
        {
            cout << i << " ";       /// printing out the points that don't belong to any of the segments
        }
    }

    return 0;
}
