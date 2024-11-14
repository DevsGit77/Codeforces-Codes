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

const int N = 1e6+10;

int p[1000000]= { 0 };


vector<bool>isPrime(N);




void Dev_Sol1()
{
    ll n, sq;

    cin>>n;

    sq = sqrt(n);

    if(n == 1)
    {
        cout<<"NO"<<endl;
    }
    else if(sq*sq == n && p[sq] == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}






// Alternative Solution :



void Dev_Sol_Alt()
{
    ll n;
    cin>>n;

    ll sq = sqrt(n);

    if(n==1) pn;
    else if(sq*sq==n && !p[sq]) py;
    else pn;
}



int main()
{
	for(int i=2; i<=1000000; i++)
	{
		if(p[i]==0)
		{
			for(int j=2; i*j<=1000000; j++)
			{
				p[i*j] = 1;
			}
		}
	}


    int t;
	cin>>t;


	while(t--)
	{
//		Dev_Sol1();
		Dev_Sol_Alt();
	}


	return 0;
}

