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

const int N = 1e5+10;


vector<int>tree[N];

vector<int>cats(N);

int n, m, canGoRestaurants=0;

void dfs(int vertex, int parent, int catCount, int mxCanGo){
    if(cats[vertex]){
        catCount++;
        mxCanGo = max(mxCanGo, catCount);
    }
    else catCount = 0;


    bool leaf = true;

    for(int child: tree[vertex]){

        if(child == parent) continue;

        dfs(child, vertex, catCount, mxCanGo);

        leaf = false;
    }

    if(mxCanGo<=m && leaf) canGoRestaurants++;
}


void Dev_Sol1()
{
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> cats[i];
    }

    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, 0, 0, 0);

    cout << canGoRestaurants << endl;
}



int main()
{
    speed;

    Dev_Sol1();

    return 0;
}
