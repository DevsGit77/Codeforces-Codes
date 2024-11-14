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


// Problem: A. Sakurako and Kosuke

void Dev_Sol1() {
    int n;
    cin >> n;

    string s = "Sakurako", k = "Kosuke";

    if(n%2) cout << k << endl;
    else  cout << s << endl;
}



// Problem: B. Sakurako and Water

int grid[501][501];


void Dev_Sol2()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> grid[i][j];
        }
    }

    int res = 0;

    for(int i=0; i<n; i++){
        int mn = 0;
        for(int j=i, k=0; k<n && j<n; k++, j++){
            mn = min(grid[k][j], mn);
        }
        if(mn<0) res += abs(mn);
    }

    for(int i=1; i<n; i++){
        int mn = 0;
        for(int j=0, k=i; k<n && j<n; k++, j++){
            mn = min(grid[k][j], mn);
        }
        if(mn<0) res += abs(mn);
    }

    cout << res << endl;
}


// Problem: C. Sakurako's Field Trip


void Dev_Sol3(){
    int n;
    cin >> n;

    vector<int> v(n+1);

    for(int i=1; i<=n; i++) cin >> v[i];

    int dis = 0;
    for(int l=1, r = n; l<r; l++, r--){
        int ds = 0, s = 0;
        if(v[l]==v[l+1]) ds++;
        if(v[r]==v[r-1] && l+1 != r) ds++;
        if(v[r]==v[l+1]) s++;
        if(v[l]==v[r-1] && l+1 != r ) s++;

        if(ds>s) swap(v[l], v[r]);
        dis += min(ds, s);
    }
    cout << dis << endl;
}



// Problem: D. Kousuke's Assignment

void Dev_Sol4()
{
    ll n;
    cin >> n;

    vector<ll> v(n);
    vin(v);

    set<ll> ps;
    ll cs = 0, res=0;
    ps.insert(0);
    for(int i=0; i<n; i++){
        cs += v[i];
        if(ps.count(cs)){
            res++;
            ps.clear();
            cs = 0;
        }
        ps.insert(cs);
    }
    cout << res << endl;
}



// Problem: E. Sakurako, Kosuke, and the Permutation


void dfs(int vertex, vector<bool>&vis, vector<int>&cc, vector<int> g[]){
    vis[vertex] = true;
    cc.push_back(vertex);
    for(auto child: g[vertex]){
        if(vis[child]) continue;
        dfs(child, vis, cc, g);
    }
}


void Dev_Sol5()
{
    int n;
    cin >> n;
    vector<int>g[n+1], v(n+1), cc;
    vector<bool> vis(n+1, false);

    for(int i=1; i<=n; i++) cin >> v[i];

    for(int i=1; i<=n; i++){
        g[i].push_back(v[i]);
        g[v[i]].push_back(i);
    }

    int prm = 0;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            cc.clear();
            dfs(i, vis, cc, g);
            if(cc.size()>2) prm += (cc.size()-1)/2;
        }
    }
    cout << prm <<endl;
}


// Alternative

void Dev_Sol5_Alt(){
    int n;
    cin >> n;
    vector<int>v(n+1), pos(n+1);

    for(int i=1; i<=n; i++){
        cin >> v[i];
        pos[v[i]] = i;
    }

    int operation=0;
    for(int i=1; i<=n; i++){
        if(v[v[i]] == i) continue;

        int temp = pos[i], vvi = v[v[i]];

        swap(v[temp], v[v[i]]);
        pos[i] = v[i];
        pos[vvi] = temp;
        operation++;
    }
    cout << operation <<endl;

}





int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
//        Dev_Sol2();
//        Dev_Sol3();
//        Dev_Sol4();
//        Dev_Sol5();
        Dev_Sol5_Alt();

    }

    return 0;
}
