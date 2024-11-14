#include <bits/stdc++.h>
#define ll long long
using namespace std;



//void Triangles(){
//    int n;
//    cin>>n;
//
//    vector<ll>v(n+1);
//
//    for(int i=0;i<n;i++)
//    {
//        ll e;
//        cin>>e;
//        v[e]++;
//    }
//
//    ll res=0, rem=0;
//
//    for(int i=0; i<=n; i++)
//    {
//        res += ( v[i] * (v[i]-1) * (v[i]-2))/6;
//
//        res += (( v[i] * (v[i]-1))/2 ) * rem;
//
//        rem += v[i];
//    }
//
//    cout<<res<<endl;
//}


/// AlterNative Solution Forming Triangles


void Triangles(){
    ll n;
    cin>>n;

    vector<ll>v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    if(n<3)
    {
        cout << 0 << endl;
        return;
    }

    sort(v.begin(), v.end());

    ll res = 0, cnt=0;

    for(int i=0;  i<n-1; i++)
    {
        if(v[i]==v[i+1])
        {
            cnt += i;
            res += cnt;
        }
        else
        {
            cnt=0;
        }
    }

    cout << res << endl;
}



int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        Triangles();
    }

    return 0;
}



