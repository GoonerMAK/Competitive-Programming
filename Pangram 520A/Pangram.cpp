//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int len, arr[26] = {0};         /// The English Alphabet has 26 letters
//    cin >> len;
//
//    string sentence;
//    cin >> sentence;
//
//    for(int i = 0 ; i<=len ; i++)
//    {
//        arr[ tolower(sentence[i]) - 'a' ]++;            /// Incrementing index(s) according to different letters
//    }
//
//    for(int i=0 ; i<26 ; i++)
//    {
//        if(arr[i] == 0)                          ///  if the value of an element is zero... that means that the letter that corresponds that index didn't appear in the sentence
//        {
//            cout << "NO" << endl;
//            return 0;
//        }
//    }
//
//    cout << "YES" << endl;
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char c,s='a';
int k=0;

while(cin>>c)k+=min(abs(s-c),26-abs(s-c)),s=c;
cout<<k;


}
