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

using lld = long double;
using namespace std;



void Dev_Sol()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    map<string, int>mp;

    for(int i=0; i<s.size()-1; i++){
        for(int j=0; j<s.size()-1; j++){
            if(s[i]==s[j] && s[i+1]==s[j+1]){
                string ns;
                ns +=s[i];
                ns += s[i+1];
                mp[ns]++;
            }
        }
    }

    string ns;
    int mx=-1;

    for(auto pr: mp){
        if(pr.second>mx){
            ns = pr.first;
            mx = pr.second;
        }
    }

    cout<<ns<<endl;
}


int main()
{
    speed;


    Dev_Sol();

    return 0;
}
