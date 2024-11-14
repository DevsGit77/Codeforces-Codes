
///INCOMPLETE code

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        char ara[11][11];


        for(int i=0; i<10; i++)
        {
            for(int j =0; j<10; j++)
            {
                cin>>ara[i][j];
            }
        }

        int c=0;

        for(int i = 0; i<10; i++)
        {
            for(int j =0; j<10; i++)
            {
                if(ara[i][j]=='X')
                {
                    if(i<=5)
                    {
                      if(j<=5)
                      {
                          c += min(i,j);
                      }
                      else
                      {
                          c += min(i,9-j);
                      }
                    }
                    else
                    {
                        if(j<=5)
                        {
                            c += min(9-i, j);
                        }
                        else
                        {
                            c += min(9-i, 9-j);
                        }
                    }
                }
            }
        }
        cout<<c<<endl;
    }

    return 0;
}
