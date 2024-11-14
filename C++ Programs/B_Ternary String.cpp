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

vector<string> substring(string s)
{
    int n = s.size();

    vector<string> substrings;

    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++){
            string st = s.substr(i, len);
            if(st.size() >= 3){
                substrings.push_back(st);
            }
        }
    }

    return substrings;
}


void Dev_Sol1() {
    string s;
    cin >> s;

    vector< pair<char, int> > vp;

    for(char ch : s){
        if(vp.empty() || vp.back().first != ch) vp.push_back({ch, 1});
        else vp.back().second++;
    }


    int n = vp.size(), res = INT_MAX;

    for(int i=1; i<n-1; i++){
        if(vp[i-1].first != vp[i+1].first) res = min(res, vp[i].second+2);
    }

    if(res == INT_MAX) res = 0;
    cout << res << endl;
}



int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
        Dev_Sol1();
    }

    return 0;
}
