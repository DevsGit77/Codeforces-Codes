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
using lld = long double;
using namespace std;


void Dev_Sol()
{
    string s, res="";

    cin>>s;

    stack<char>uc, lc;


    for(int i=s.size()-1; i>=0; i--){
        if(s[i]=='B') uc.push(s[i]);
        else if(s[i]=='b') lc.push(s[i]);
        else{
            if(s[i]<91){
                if(!uc.empty()){
                    uc.pop();
                }
                else res += s[i];
            }
            else{
                if(!lc.empty()){
                    lc.pop();
                }
                else res += s[i];
            }
        }
    }

    reverse(all(res));

    cout<<res<<endl;


}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}
