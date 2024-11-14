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


bool should_i_swap(char a, char b)
{
    return a<b;
}



void Dev_Sol()
{
    string s;
    cin>>s;

    int cnt=1;
    bool srt = false;

    for(int i=0; i<s.size()-1; i++){
        cnt += (s[i] != s[i+1]);

        srt |= (s[i]=='0' && s[i+1]=='1');
    }

    cout<<cnt-srt<<endl;
}



void Dev_Sol2()
{
    string s;
    cin>>s;

    int res=1;
    bool b = false;

    maze(s.size()-1)
    {
        if(s[i]=='1' && s[i+1]=='0') res++;
        else if(s[i]=='0' && s[i+1]=='1'){
            if(b) res++;
            b= true;
        }
    }

    cout<<res<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
//        Dev_Sol();
        Dev_Sol2();
    }

    return 0;
}

