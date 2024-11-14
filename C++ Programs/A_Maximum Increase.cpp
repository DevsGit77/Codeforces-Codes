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
    int n;
    cin>>n;;

    vector<int>v(n);

    int mxc=0, cnt=0, rem=0;

    maze(n) cin>>v[i];

    for(int i=1; i<n; i++)
    {
        if(v[i]>v[i-1])
        {
            cnt++;
            mxc = max(mxc, cnt);
        }
        else cnt =0;
    }

    cout<<mxc+1<<endl;


}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
