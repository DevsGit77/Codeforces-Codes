#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Photos()
{
    int n, m;
    cin>>n>>m;

    char ara[n][m];

    bool iscolor = false;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>ara[i][j];

            if(ara[i][j] == 'C' || ara[i][j] == 'M' || ara[i][j] == 'Y')
               iscolor = true;
        }
    }

    if(iscolor)
        cout<<"#Color"<<endl;
    else
        cout<<"#Black&White"<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    Photos();


    return 0;
}
