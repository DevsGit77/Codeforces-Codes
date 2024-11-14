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


// Problem: A. Simple Palindrome

void Dev_Sol1()
{
    int n;
    cin >> n;

    int x = n/5, y = n%5;

    vector<int> ct(5, x);

    string vowel = "aeiou";

    for(int i=0; i<y; i++) ct[i]++;
    for(int i=0; i<5; i++){
        for(int j=0; j<ct[i]; j++){
            cout << vowel[i];
        }
    } cout << endl;
}



// Problem: B1. The Strict Teacher (Easy Version)


void Dev_Sol2(){
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> t(m);
    vin(t);
    sort(all(t));

    int dp;
    cin >> dp;

    if(dp<t[0] && dp<t[1]) cout << t[0]-1 <<endl;
    else if(dp>t[0] && dp>t[1]) cout<< n-t[1] <<endl;
    else if(dp>=t[0] && dp<=t[1]) cout << (t[1]-t[0])/2 << endl;
}

// ALTERNATIVE

void Dev_Sol2_ALT(){
    int n, m, q;
    cin >> n >> m >> q;

    int x, y;
    cin >> x >> y;

    int mn = min(x, y), mx = max(x, y);
    int dp;
    cin >> dp;

    if(dp<mn && dp<mx) cout << mn-1 <<endl;
    else if(dp>mn && dp>mx) cout<< n-mx <<endl;
    else cout << (mx-mn)/2 << endl;
}


// Problem: B2. The Strict Teacher (Hard Version)

void Dev_Sol3()
{
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> t(m);
    vin(t);
    sort(all(t));

    while(q--){
        int dp;
        cin >> dp;

        int lo=0, hi=m-1, mid;

        while(hi-lo>1){
            mid = (lo+hi)/2;
            if(t[mid]<= dp){
                lo = mid+1;
            }
            else{
                hi = mid;
            }
        }

        if(dp < t[0]) cout << t[0]-1 <<endl;
        else if(dp > t[m-1]) cout<< n - t[m-1] <<endl;
        else  cout << (t[hi] - t[hi-1])/2 << endl;
    }
}





int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
//        Dev_Sol2_ALT();
        Dev_Sol3();
    }

    return 0;
}
