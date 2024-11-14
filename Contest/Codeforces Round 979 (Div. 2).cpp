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


// Problem: A. A Gift From Orangutan

void Dev_Sol1() {
    int n;
    cin >> n;
    vector<int> vec(n);
    vin(vec);
    sort(all(vec));
    int res = abs(vec[n-1]-vec[0])*(n-1);
    cout << res << endl;
}

//Problem: B. Minimise Oneness

void Dev_Sol2(){
    int n;
    cin >> n;

    if(n==1) cout << 0 <<endl;
    else{
        string bs = "";
        for(int i=0; i<n-1; i++){
            bs += '0';
        }
        bs += '1';
        cout << bs << endl;
    }
}


// Problem: C. A TRUE Battle

void Dev_Sol3(){
    int n;
    cin >> n;
    string bs;
    cin >> bs;
    for(int i=0; i<n; i++){
        if(bs[i]=='1'){
            if(i==0 || i==n-1 || bs[i+1] == '1'){
                py;
                return;
            }
        }
    }
    pn;
}


// Problem: (Unsolved) D. QED's Favorite Permutation

void Dev_Sol4(){
    int n, q;
    string ps, s;
    cin >> n >> q;
    vector<int> prm(n), v1(n), v2(n);
    vin(prm);
    cin >> ps;

    v1[0] = prm[n-1];
    v2[n-1] = prm[0];
    for(int i=1; i<n; i++){

    }

    while(q--){
        int e;
        cin >> e;
        s = ps;
        if(s[e-1]=='R') s[e-1] = 'L';
        else s[e-1] = 'R';


    }


}


int main() {
    speed;

    int tc;
    cin>>tc;
    while(tc--) {
//        Dev_Sol1();
//        Dev_Sol2();
        Dev_Sol3();
//        Dev_Sol4();
    }

    return 0;
}

