#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, even=0, odd=0;
        cin >> n;
        int arr[2*n];

        for(int i=0 ; i < (2*n) ; i++)
        {
            cin >> arr[i];
            ( (arr[i]%2 == 0) ? even++ : odd++ );
        }

        ( even==odd ? puts("YES") : puts("NO") );             /// sum of a pair will be odd if and only if one element is odd and the other one is even
    }                                                        ///  that's why we need same amount of odd and even numbers

    return 0;
}
