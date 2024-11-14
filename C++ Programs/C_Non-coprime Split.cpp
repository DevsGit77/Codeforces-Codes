
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
#define nroot(x, n) pow(x, 1.0/n)


using lld = long double;
using namespace std;


bool isprime(int n) {
  if (n <= 1) return false;
  for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}


void Dev_Sol1()
{
    int l, r;
    cin>>l>>r;

    for(int i=l; i<=r; i++){
        if(isprime(i)==false){
            if(i%2==0){
                int res = i/2;
                cout<<res<<" "<<res<<endl;
                return;
            }
            else{
                int a = i-2, b=2;

                while(a!=b && a>0 && b>0){
                    if(__gcd(a, b)>1){
                        cout<<a<<" "<<b<<endl;
                        return;
                    }
                    a--;
                    b++;
                }
            }
        }
    }

    cout<<-1<<endl;
}




// Alternative ( Optimize Solution )



void Dev_Sol_Alt()
{
    int left, right;
    cin>>left>>right;

    for(int i=max(4, left); i <= right; i++){
        for(int p = 2; p*p<=i; p++){
            if(i%p == 0){
                cout<<i-p<<" "<<p<<endl;
                return;
            }
        }
    }

    cout<<"-1\n";
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
