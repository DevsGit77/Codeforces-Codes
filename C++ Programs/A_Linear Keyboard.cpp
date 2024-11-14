#include <bits/stdc++.h>
#define ll long long
#define vin(v) for(auto &i: v) cin>>i;
#define vout(v) for(auto i: v) cout<<i<<" "; cout<<endl;
#define fl(i, a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_1count(a) __builtin_popcountll(a)
#define bit_cnt(num) log2(num)+1
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )
#define lastsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)
#define pi 3.14159265358979323846264338327950
#define nroot(x, n) pow(x, 1.0/n)


using lld = long double;
using namespace std;




void Dev_Sol1()
{
    string s, t;
    cin >> s >> t;

    map<char, int> mp;

    for(int i=0; i<s.size(); i++){
        mp[s[i]] = i+1;
    }

    int sum = 0;

    for(int i=0; i<t.size()-1; i++){
        sum += abs(mp[t[i]] - mp[t[i+1]]);
    }

    cout<<sum<<endl;
}


// Alternative:


void Dev_Sol_Alt()
{
    vector<char> vc;

    string a, b;
    cin >> a >> b;

    int res=0;

    for(int i=0; i<a.size(); i++) vc.push_back(a[i]);

    for(int i=0; i<b.size()-1; i++){
        auto it1 = find(all(vc), b[i]);
        auto it2 = find(all(vc), b[i+1]);

        res += abs((it1-vc.begin()+1) - (it2-vc.begin()+1));
    }

    cout<<res<<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
        Dev_Sol_Alt();
    }

    return 0;
}
