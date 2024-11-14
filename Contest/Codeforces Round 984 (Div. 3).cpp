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


// Problem: A. Quintomania

void Dev_Sol1() {
    int n;
    cin >> n;
    vector<int> v(n);
    vin(v);

    for(int i=0; i<n-1; i++){
        int dif = abs(v[i+1]-v[i]);
        if(dif==5 || dif==7) {
            continue;
        }
        else{
            pn;
            return;
        }
    }
    py;
}


// Problem: B. Startup

void Dev_Sol2()
{
    int n, k;
    cin >> n >> k;

    vector<int>v(k);
    for(int i=0; i<k; i++){
        int b, c;
        cin >> b >> c;
        v[--b] += c;
    }
    sort(v.rbegin(), v.rend());

    int res = 0;
    for(int i=0; i<min(n,k); i++) res += v[i];
    cout << res <<endl;
}


// Problem: C. Anya and 1100

void Dev_Sol3(){
    string s, t;
    int q;
    cin >> s >> q;

    int egarosho = 0;

    for (int i=0; i<s.size()-3; i++) {
        if (s.substr(i, 4) == "1100") egarosho++;
    }

    while(q--){
        int x;
        char y;
        cin >> x >> y;
        --x;

        if (x >= 3 && s.substr(x-3, 4) == "1100") egarosho--;
        if (x >= 2 && x < s.size() && s.substr(x-2, 4) == "1100") egarosho--;
        if (x >= 1 && x < s.size() && s.substr(x-1, 4) == "1100") egarosho--;
        if (x < s.size()-2 && s.substr(x, 4) == "1100") egarosho--;

        s[x] = y;

        if (x >= 3 && s.substr(x-3, 4) == "1100") egarosho++;
        if (x >= 2 && x<s.size() && s.substr(x-2, 4) == "1100") egarosho++;
        if (x >= 1 && x<s.size()-1 && s.substr(x-1, 4) == "1100") egarosho++;
        if (x < s.size()-2 && s.substr(x, 4) == "1100") egarosho++;

        if(egarosho>0) py;
        else pn;
    }
}



// Problem: D. I Love 1543

void Dev_Sol4(){

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
