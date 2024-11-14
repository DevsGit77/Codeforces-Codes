#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define acm(v, x) accumulate(v.begin(), v.end(), x)
#define cnt(v, x) count(v.begin(), v.end(), x)
#define sm [](int x, int y) {return x+y;}
#define lcm(a, b)  a*b/__gcd(a, b)
#define bit_count(a) __builtin_popcount(a)
#define clr_LSB(n, i) ( n & ~((1<<(i+1))-1) )
#define clr_MSB(n, i) (  n & ((1<<(i+1))-1) )

using lld = long double;
using namespace std;

const long long int N = 1e7+10;

vector<bool>isPrime(N, 1);


bool isprime(ll n){
	if(n<2) return false;
	for(ll i=2;i*i*i<=n;++i) if(n%i==0) return false;
	for(int it=0;it<1e5;++it){
		ll i = rand()%(n-1)+1;
		if(__gcd(i,n)!=1) return false;
		//if(mpow(i,n-1,n)!=1) return false;
	}
	return true;
}


bool isSquarePrime(ll n) /// O(log^3) or O(1) with precalculation
{
    ll t = round(sqrt(n));
    return (t * t == n && isPrime[t]);
}


void Dev_Sol()
{
    isPrime[0]= isPrime[1]= false;

    for(int i=2; i< N; i++){
        if(isPrime[i] == true){
            for(int j=2*i; j<N; j += i){
                isPrime[j]=false;
            }
        }
    }

    ll n;
    cin>>n;

    ll res = 1;

    for(int p=1; p<N; p++){
        if(isPrime[p]==true){
            if(p*p*p>n){
                break;
            }
            ll cnt = 1;

            while(n%p==0){
                n/=p;
                cnt++;
            }

            res *= cnt;
        }
    }

    if(isPrime[n]){
        res = res*2;
    }
    else if(isSquarePrime(n)){
        res = res*3;
    }
    else if(n!=1){
        res = res*4;
    }

    cout<<res<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
