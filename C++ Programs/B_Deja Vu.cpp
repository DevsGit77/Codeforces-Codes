
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

const int N=1e5+10;

vector<int>a(N);


void Dev_Sol1()
{
    int n, q;
    cin>>n>>q;
    vector<int>a(n);

    for(auto &i: a) cin>>i;

    int rem=-1;

    while(q--){
        int e;
        cin>>e;

        if(rem==-1 || e<rem){
            rem=e;
            for(int i=0; i<n; i++){
                if(a[i]%(1LL<<e)==0){
                    a[i] += (1LL<<(e-1));
                }
            }
        }
    }

    for(auto i: a){
        cout<<i<<" ";
    } cout<<endl;
}


// Alternative

void Dev_Sol_Alt()
{
    int n, q;
    cin>>n>>q;

    vector<int>a(n);
    for(auto &i: a) cin>>i;

    int temp=-1;

    while(q--){
        int i;
        cin>>i;

        if(temp==-1||i<temp){
            temp = i;
            for(int j=0; j<n; j++){
                if(a[j]%(1<<i)==0){
                    a[j]+=(1<<(i-1));
                }
            }
        }
    }

    for(auto i: a){
        cout<<i<<" ";
    } cout<<endl;
}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--){
//        Dev_Sol1();
        Dev_Sol_Alt();
    }

    return 0;
}
