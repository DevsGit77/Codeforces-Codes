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
const int N = 2e3+10;

int n, m, r, c, x, y;
int res = 1;
vector<vector<char>> g(N, vector<char>(N));
vector<vector<bool>> vis(N, vector<bool>(N, false));

vector<pii> mvs = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};


bool isValid(int i, int j){
    return i>=1 && j>=1 && i<=n && j<=m;
}



void bfs(int sr, int sc){
    deque<pii> q1, q2;
    q1.push_back({sr, sc});
    q2.push_back({x, y});
    vis[sr][sc] = true;

    while(!q1.empty()){
        pii par = q1.front(), pos = q2.front();
        int cr = par.first;
        int cc = par.second;
        int left = pos.first;
        int right = pos.second;
        q1.pop_front();
        q2.pop_front();

        for(auto mv : mvs){
            int nr = cr + mv.first;
            int nc = cc + mv.second;
            if(isValid(nr, nc) && !vis[nr][nc] && g[nr][nc] != '*'){
                vis[nr][nc] = true;
                if(mv.first == -1){
                    q1.push_front({nr, nc});
                    q2.push_front({left, right});
                    res++;
                }
                if(mv.first == 1){
                    q1.push_front({nr, nc});
                    q2.push_front({left, right});
                    res++;
                }
                if(mv.second == -1 && left){
                    q1.push_back({nr, nc});
                    q2.push_back({left-1, right});
                    res++;
                }
                if(mv.second == 1 && right){
                    q1.push_back({nr, nc});
                    q2.push_back({left, right-1});
                    res++;
                }
            }
        }

    }

}


void Dev_Sol1() {

    cin >> n >> m;
    cin >> r >> c;
    cin >> x >> y;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> g[i][j];
        }
    }

    bfs(r, c);

    cout << res << endl;

}



int main() {
    speed;


    Dev_Sol1();

    return 0;
}

