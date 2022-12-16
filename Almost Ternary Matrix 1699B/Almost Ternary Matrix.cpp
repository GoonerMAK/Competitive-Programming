#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n,m, valuei1=0, valuei2=3;
        int valuei3=1, valuei4=2;
        cin >> n >> m;

        int arr[n][m];


        for(int i=0 ; i<n ; i++)
        {
             for(int j=0 ; j<m ; j++)
             {
                 arr[i][j] = 0;
             }
        }


        for(int i=0 ; i<n ; i++)
        {
            if(i == valuei1)
            {

                int valuej1 = 1, valuej2 = 2;

                for(int j=0 ; j<m ; j++)
                {
                    if( j == valuej1  )
                    {
                        arr[i][j] = 1;
                        valuej1 = valuej1 + 4;
                    }

                    else if( j == valuej2 )
                    {
                        arr[i][j] = 1;
                        valuej2 = valuej2 + 4;
                    }

                }

                valuei1 = valuei1 + 4;
            }


            else if( i == valuei2 )
            {

                int valuej1 = 1, valuej2 = 2;

                for(int j=0 ; j<m ; j++)
                {
                    if( j == valuej1  )
                    {
                        arr[i][j] = 1;
                        valuej1 = valuej1 + 4;
                    }

                    else if( j == valuej2 )
                    {
                        arr[i][j] = 1;
                        valuej2 = valuej2 + 4;
                    }

                }

                valuei2 = valuei2 + 4;
            }


            else if( i == valuei3 )
            {

                int valuej1 = 0, valuej2 = 3;

                for(int j=0 ; j<m ; j++)
                {
                    if( j == valuej1  )
                    {
                        arr[i][j] = 1;
                        valuej1 = valuej1 + 4;
                    }

                    else if( j == valuej2 )
                    {
                        arr[i][j] = 1;
                        valuej2 = valuej2 + 4;
                    }

                }

                valuei3 = valuei3 + 4;
            }


            else if( i == valuei4 )
            {

                int valuej1 = 0, valuej2 = 3;

                for(int j=0 ; j<m ; j++)
                {
                    if( j == valuej1  )
                    {
                        arr[i][j] = 1;
                        valuej1 = valuej1 + 4;
                    }

                    else if( j == valuej2 )
                    {
                        arr[i][j] = 1;
                        valuej2 = valuej2 + 4;
                    }

                }

                valuei4 = valuei4 + 4;
            }

        }



        for(int i=0 ; i<n ; i++)
        {
             for(int j=0 ; j<m ; j++)
             {
                 cout << arr[i][j] << " ";
             }

             puts("");
        }




    }

    return 0;
}
