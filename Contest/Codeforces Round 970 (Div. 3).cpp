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


// Problem: A. Sakurako's Exam


void Dev_Sol1()
{
    int x, y;
    cin>>x>>y;

    if(x%2==0 && y%2==1 && !(x<2)) py;
    else if(x%2==0 && y%2==0) py;
    else pn;
}



// Problem: C. Longest Good Array

void Dev_Sol3()
{
    ll lt, rt;
    cin>>lt>>rt;

    ll len=0, sum=0, rem;

    while(1){
        rem = sum+len+1;
        if(rt-lt>=rem){
            sum += len+1;
            len++;
        }
        else{
            len++;
            cout<<len<<endl;
            return;
        }
    }
}


// Problem: B. Square or Not

void Dev_Sol2()
{
    int n;
    string st;

    cin>>n>>st;

    int sq=sqrt(n);

    if(sq*sq!=n){
        pn;
    }
    else{
        for(int i=0; i<sq; i++){
            if(st[i]!='1' && st[n-sq+i]!='1') {
                pn;
                return;
            }
        }

        for(int i=1; i<sq-1; i++){
            int tm = i*sq;
            if(st[tm]!='1' && st[tm+sq-1]!='1') {
                pn;
                return;
            }

            for(int t=1; t<sq-1; t++){
                if(st[tm+t]!='0') {
                    pn;
                    return;
                }
            }
        }
        py;
    }
}



// Problem: D. Sakurako's Hobby

void Dev_Sol4()
{
    int n;
    cin>>n;

    vector<int>prm(n), res(n, 0), vis(n, 0);
    maze(n){
        cin>>prm[i];
        prm[i]--;
    }

    string st;
    cin>>st;

    maze(n){
        if(vis[i]==0){
            int cnt=0, e=i;
            vector<int>vv;

            while(vis[e]==0){
                vis[e] = 1;
                vv.push_back(e);
                if(st[e]!='1') cnt++;
                e = prm[e];
            }
            for(auto d : vv) res[d] = cnt;
        }
    }

    vout(res);
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
//        Dev_Sol3();
//        Dev_Sol2();
        Dev_Sol4();
    }

    return 0;
}
