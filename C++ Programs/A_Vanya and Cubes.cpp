
#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Cubes()
{
    int n;
    cin>>n;

    int sum=0, cnt=0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            sum += j;
        }

        if(sum<=n)
            cnt++;
        else
            break;
    }

    cout<<cnt<<endl;
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
    Cubes();

    return 0;
}
