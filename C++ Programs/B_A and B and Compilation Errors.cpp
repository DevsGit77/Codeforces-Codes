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
    ll n, sa=0, sb=0, sc=0;
    cin>>n;

    vector<ll>a(n), b(n-1), c(n-2);


    maze(n)
    {
        cin>>a[i];
        sa += a[i];
    }
    maze(n-1)
    {
        cin>>b[i];
        sb += b[i];
    }
    maze(n-2)
    {
        cin>>c[i];
        sc += c[i];
    }


    cout<<sa-sb<<endl;
    cout<<sb-sc<<endl;

//    maze(n)
//    {
//
//        auto it = find(all(b), c[i]);
//        auto it2 = find(all(a), b[i]);
//
//
//        if(it!=b.end())
//            b.erase(it);
//        if(it!=a.end())
//            a.erase(it);
//
//    }


//    for(auto e:mp)
//    {
//        if(e.second != 3)
//        {
//            cout<<e.first<<endl;
//        }
//    }

}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
