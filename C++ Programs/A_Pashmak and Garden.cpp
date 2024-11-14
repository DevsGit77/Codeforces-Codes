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

int sq(int a) {return a*a; }



void Dev_Sol1()
{
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;


    if(x1==x2){
        int x3 = x1+abs(y1-y2), y3 = y1;
        int x4 = x2+abs(y1-y2), y4 = y2;

        cout << x3 <<" "<< y3 <<" "<< x4 <<" "<< y4 <<endl;
    }
    else if(y1 == y2){
        int x3 = x1, y3 = y1+abs(x1-x2);
        int x4 = x2, y4 = y2+abs(x1-x2);

        cout << x3 <<" "<< y3 <<" "<< x4 <<" "<< y4 <<endl;
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        int x3 = x1, y3 = y2;
        int x4 = x2, y4 = y1;

        cout << x3 <<" "<< y3 <<" "<< x4 <<" "<< y4 <<endl;
    }
    else cout << -1 << endl;
}



int main()
{
    speed;

    Dev_Sol1();

    return 0;
}
