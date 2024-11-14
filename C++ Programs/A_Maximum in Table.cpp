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




void Dev_Sol1()
{
    int n;
    cin>>n;

    vector<vector<int>> v(11, vector<int> (11, 1));

    for(int i=1; i<11; i++){
        for(int j=1; j<11; j++){
            v[i][j]= v[i-1][j]+v[i][j-1];
        }
    }

    cout<<v[n-1][n-1]<<endl;

}



int main()
{
    speed;

    Dev_Sol1();

    return 0;
}
