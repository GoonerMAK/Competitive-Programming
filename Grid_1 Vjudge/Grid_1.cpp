#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, H, W;      ///  H = rows, W = columns

    cin >> N >> H >> W;

    cout << (N-H+1)*(N-W+1) << endl;

    return 0;
}

