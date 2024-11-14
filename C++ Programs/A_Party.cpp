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
const int N = 2e3+10;
vector<int>g[N];

int dfs(int vertex, vector<int>&dep){
    if(dep[vertex] != -1) return dep[vertex];
    int mxd=1;
    for(auto child : g[vertex]){
        mxd = max(mxd, 1+dfs(child, dep));
    }
    dep[vertex] = mxd;
    return mxd;
}


void Dev_Sol1() {
    int n;
    cin >> n;
    vector<int>roots;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        if(x!=-1) g[x].push_back(i);
        else roots.push_back(i);
    }

    vector<int> dep(n+1, -1);
    int mxdep=0;
    for(int root: roots){
        mxdep = max(mxdep, dfs(root, dep));
    }
    cout << mxdep << endl;
}



// Alternative

void Dev_Sol_Alt(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin >> v[i];
    int res = 0;
    for(int i=1; i<=n; i++){
        int tmp = v[i];
        int cnt = 1;
        while(tmp != -1){
            tmp = v[tmp];
            cnt++;
        }
        res = max(res, cnt);
    }
    cout << res << endl;
}

int main() {
    speed;

//    Dev_Sol1();
    Dev_Sol_Alt();

    return 0;
}


