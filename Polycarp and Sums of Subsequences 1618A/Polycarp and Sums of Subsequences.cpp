#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n1, n2, n3, n4, n5, n6, big;                           ///  whole array b
        cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> big;           /// last number is the biggest one, which is the sum of 3 positive integers of array a

        cout << n1 << " " << n2 << " " << big - n1 - n2 << endl;     ///  so we could just take the smallest two numbers and subtract it from the biggest one... then we'll get the 3 integers of array a
    }

    return 0;
}
