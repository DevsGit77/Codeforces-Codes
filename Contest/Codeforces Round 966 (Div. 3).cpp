#include <bits/stdc++.h>
#define ll long long
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
#define maxsbi(x) __lg(x)
#define ffsbi(x) __builtin_ffs(x)


using lld = long double;
using namespace std;


/// Problem: A. Primary Task

void Dev_Sol1()
{
    string s;
    cin>>s;

    if(s.size()<3) pn;
    else if(s.size()==3){
        if(s[0]=='1' && s[1]=='0' && s[2]-'0'>1) py;
        else pn;
    }
    else if(s[0]=='1' && s[1]=='0' && s[2]-'0'>0){
        py;
    }
    else pn;
}


/// B. Seating in a Bus

void Dev_Sol2()
{
    int n;
    cin>>n;

    vector<int>v(n+1), hsh(n+1);

    fl(i, 1, n+1){
        cin>>v[i];
        hsh[v[i]] = i;
    }

    bool b=true;

    for(int i=v[1]+1; i<=n; i++){
        if(hsh[i] < hsh[i-1]) b = false;
    }

    for(int i=v[1]-1; i>=1; i--){
        if(hsh[i] < hsh[i+1]) b = false;
    }

    if(b) py;
    else pn;
}


/// Alternative

void Dev_Sol2_Alt()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(auto &i: v) cin>>i;

    int left = v[0], right = v[0];
    bool b= false;

    for(int i=1; i<n; i++){
        if(v[i]==left-1) left--;
        else if(v[i]==right+1) right++;
        else b = true;
    }

    (b? pn: py);
}



/// C. Numeric String Template


void Dev_Sol3()
{
    int n;
    cin>>n;

    vector<int>v(n);

    for(auto &i: v) cin>>i;

    int q;
    cin>>q;

    map<char, int> mp1;
    map<int, char>mp2;


    for(int i=0; i<q; i++){
        string s;
        cin>>s;

        if(s.size()!=n){
            pn;
            continue;
        }
        bool b=true;

        for(int i=0; i<n; i++){
            if(mp1.count(s[i])){
                if(mp1[s[i]] != v[i]) b = false;
            }

            if(mp2.count(v[i])){
                if(mp2[v[i]] != s[i]) b = false;
            }

            mp1[s[i]] = v[i];
            mp2[v[i]] = s[i];
        }

        if(b) py;
        else pn;

        mp1.clear();
        mp2.clear();

    }
}



/// Problem: D. Right Left Wrong


void Dev_Sol4()
{
    ll n;
    cin>>n;

    vector<ll>num(n+10);

    for(int i=1; i<=n; i++){
        cin>>num[i];
        num[i] += num[i-1];
    }

    string st;
    cin>>st;

    ll res=0;

    ll l=0, r = n-1;

    while(l<=r){
        if(st[l] !='L'){
            l++; //continue;
        }

        if(st[r]!='R'){
            r--; //continue;
        }

        else{
            st[l] = '.';
            st[r] = '.';

            if(l>0) res += num[r+1]-num[l];
            else res += num[r+1];
        }
    }

    cout<<res<<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol2();
//        Dev_Sol2_Alt();
//        Dev_Sol3();
        Dev_Sol4();
    }

    return 0;
}
