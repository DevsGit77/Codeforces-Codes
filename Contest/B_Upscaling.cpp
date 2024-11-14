#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void show(bool f)
{
    if(f)
        cout<<"##";
    else
        cout<<"..";
}


void Joy_Sol()
{
    int n;
    cin>>n;

    maze(2*n)
    {
        fr(j, 0, n)
        {
            if((i/2 + j)%2 == 0)
                show(1);
            else
                show(0);
        }
        cout<<endl;
    }
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Joy_Sol();
    }

    return 0;
}
