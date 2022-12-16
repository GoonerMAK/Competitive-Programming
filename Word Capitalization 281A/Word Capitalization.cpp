#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;

    for(int i=0 ; word[i] != '\0' ; i++)
    {
        word[0] = toupper(word[0]);
        cout << word[i];
    }

    return 0;
}
