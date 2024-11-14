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




void Dev_Sol1() {
    int n;
    cin >> n;

    vector<int>v(n);
    vin(v);
    set<int>s;
    stack<int>stk;

    for(int i=n-1; i>=0; i--){
        if(!s.count(v[i])){
            s.insert(v[i]);
            stk.push(v[i]);
        }
    }

    cout << s.size() <<endl;

    while(!stk.empty()){
        cout << stk.top() <<" ";
        stk.pop();
    } cout << endl;
}


// ALTERNATIVE

vector<bool> vis(1e5, false);

void Dev_Sol_alt(){
    int n;
    cin >> n;
    vector<int> v(n), res;
    vin(v);
    reverse(all(v));

    for(int i=0; i<n; i++){
        if(!vis[v[i]]){
            vis[v[i]] = true;
            res.push_back(v[i]);
        }
    }
    reverse(all(res));

    cout << res.size() <<endl;
    vout(res);
}



int main() {
    speed;

//    Dev_Sol1();
    Dev_Sol_alt();

    return 0;
}
