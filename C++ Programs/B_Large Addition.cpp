#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;


void Dev_Sol()
{
    string s;
    cin>>s;



    if(s.back()=='9'|| s[0] != '1') pn;
    else{
        bool b=1;

        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='0'){
                b=0;
            }
        }

        if(b)py;
        else pn;
    }
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

