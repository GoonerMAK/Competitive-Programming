#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int arr[26] = {0};      // initilizing array of size 26 (number of alphabets) to zero

        string name;
        cin >> name;

        char character = 'a';

        for(int i=0 ; i<name.size() ; i++)          // iterate through all of the characters of the string
        {
            name[i] = tolower(name[i]);             // making it small letter
            arr[name[i] - 'a']++;                   // Incrementing the array, indicating that that character exists
        }

        for(int i=0 ; i<26 ; i++)
        {
            if(arr[i] == 0)
            {
                character = char(i + 'a');         // figure out a character that wasn't present in the name string
                break;
            }
        }

        // now print the charater few times
        cout << character << character << character << character << character << endl;
    }
    
    return 0;
}