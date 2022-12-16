#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch, letter = 'a' ;
	int ans = 0;

	while(cin >> ch && ch!='\n')
	{
	    ans = ans + min( abs(letter - ch), 26-abs(letter-ch) );
	    letter = ch;
	}
	cout << ans << endl;

    return 0;
}
