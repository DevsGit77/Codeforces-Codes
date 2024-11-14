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
#define pii pair<int, int>

using lld = long double;
using namespace std;


// Problem: A. Circuit

void Dev_Sol1() {
    int n;
    cin >> n;
    int one=0;
    for(int i=0; i<2*n; i++){
        int x;
        cin >> x;
        if(x==1)one++;
    }
    cout << one%2 << " " << min(one, (2*n - one)) << endl;
}



// Problem: B. Medians

void Dev_Sol2()
{
    int n, k;
    cin >> n >> k;

    vector<int> res;

    if(n==1) res.push_back(1);
    else if(n>=3 && k!=1 && k!=n){
        if(k%2){
            res.push_back(1);
            res.push_back(k-1);
            res.push_back(k+2);
        }
        else{
            res.push_back(1);
            res.push_back(k);
            res.push_back(k+1);
        }
    }

    if(!res.empty()){
        cout << res.size() << endl;
        vout(res);
    }
    else cout << -1 << endl;
}


// Problem: C. Trinity

void Dev_Sol3()
{
    int n;
    cin >> n;
    vector<int>v(n);
    vin(v);
    sort(all(v));

    int res = n-2;
    for(int i=0, j=2; j<n; j++){
        while(v[i]+v[i+1] <= v[j]) i++;
        res = min(res, n-(j-i+1));
    }
    cout << res << endl;
}

int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol3();
    }

    return 0;
}
