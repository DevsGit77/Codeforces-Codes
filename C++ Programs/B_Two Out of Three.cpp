#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_count(a) __builtin_popcount(a)
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;


void Dev_Sol() /// Wrong
{
    int n;
    cin>>n;

    vector<int>v(n), ans(n, 1);

    set<int>s;


//    for(int i=0; i<n; i++){
//        cin>>v[i];
//        if(v[i]==1 || v[i]==2 || v[i]==3){
//            ans[i]=v[i];
//
//    }

    for(auto &i : v) cin>>i;

    int rem=0;

    bool b=true;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]) s.insert(v[i]);
            if(v[i]==v[j] && v[i]!=rem){
                if(b){
                    ans[i]=2;
                    b=false;
                    rem=v[i];
                }
                else{
                    ans[i]=3;
                    rem=v[i];
                    break;
                }
            }
        }
    }

//    set<int>s;
//
//    for(auto i : ans){
//        s.insert(i);
//    }

    if(s.size()>=2){
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}


void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int> v(n), res(n, 1);
    map<int, int> mp;

    int  a=-1, b=-1;

    maze(n)
    {
        cin>>v[i];

        mp[v[i]]++;

        if(a==-1 && mp[v[i]]>=2){
            a = i;
            res[a]=2;
        }
        else if(b==-1 && mp[v[i]]>=2 && v[i] != v[a]){
            b = i;
            res[b]=3;
        }
    }

    if(a==-1 || b==-1) cout<<-1<<endl;
    else{
        for(auto e : res) cout<<e<<" ";
        cout<<endl;
    }
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol();
        Dev_Sol2();
    }

    return 0;
}
