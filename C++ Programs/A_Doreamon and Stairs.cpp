#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n, m;
    cin>>n>>m;

    int mv;

    if(n>=m)
    {
        if(n%2==0)
        {
            mv = n/2;

            while(mv%m != 0)
                mv++;

            cout<<mv<<endl;
        }
        else
        {
            mv = n/2 + 1;

            while(mv%m != 0)
                mv++;
            cout<<mv<<endl;
        }
    }
    else
        cout<<"-1"<<endl;


}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}

