#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line1, line2, pile;
    cin >> line1 >> line2 >> pile;

    line1 = line1 + line2;                  /// adding the 2 lines together

    sort( line1.begin(), line1.end() );     ///  sorting alphabetically
    sort( pile.begin(), pile.end() );

    ( line1 == pile ? puts("YES") : puts("NO") );      /// if both are same that means we can match the string "pile" with the first 2 lines
    return 0;
}

///  sorting strings
