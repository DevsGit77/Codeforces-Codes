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


const int N = 1e9;




void Dev_Sol1() {
    int n;
    cin >> n;
    map<string, int> mp;
    mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;

    int res = 1e9;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        string s;
        cin >> s;

        mp[s] = min(mp[s], x);
    }
    if(min(mp["11"], mp["10"] + mp["01"]) > (int)1e6)  cout << -1 << endl;
    else {
        cout << min(mp["11"], mp["10"] + mp["01"]) << endl;
    }
}




/////// ALTERNATIVE ///////\


void Dev_Sol_alt(){
    int n;
    cin >> n;

    map<string , int> mp;
    mp["00"] = mp["01"] = mp["10"]= mp["11"] = N;

    for(int i=0; i<n; i++){
        int m;
        string skl;
        cin >> m >> skl;

        mp[skl] = min(m, mp[skl]);
    }

    int res = min(mp["01"]+mp["10"], mp["11"]);

    if(res > (int)1e6 ) cout << -1 << endl;
    else cout << res << endl;

}





int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
        Dev_Sol_alt();
    }

    return 0;
}
