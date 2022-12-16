#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long wheels, count4=0, count6=0, four=0, six=0;
        cin >> wheels;

        if(wheels <= 3)
        {
            cout << "-1" << endl;
            continue;
        }

        else
        {
            if( wheels % 2 != 0 )
            {
                cout << "-1" << endl;
                continue;
            }

            else
            {
                long long temp = wheels;

                while(wheels % 6 != 0)
                {
                    wheels = wheels-4;
                    count4++;
                }
                six = wheels / 6;

                wheels = temp;

                while(wheels % 4 != 0)
                {
                    wheels = wheels-6;
                    count6++;
                }
                four = wheels/4;

                four = four + count6;
                six = six + count4;

                if(four == 0  ||  six == 0)
                {
                    temp = max(four, six);

                    cout << temp << " " << temp << endl;
                }

                else
                {
                    cout << six << " " << four << endl;
                }
            }


        }
    }

    return 0;
}
