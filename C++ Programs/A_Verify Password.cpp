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


vector<char> na = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};



void Dev_Sol()
{
    int n;
    cin>>n;

    string s, ns="", cs="";
    cin>>s;

    bool isd = false;

    for(int i=0; i<n; i++){
        if(isdigit(s[i])){
            isd=true;
            ns += s[i];
        }
        else
            cs += s[i];
    }

    if(isd && isdigit(s[0])){
        if(is_sorted(all(ns)) && is_sorted(all(cs))) py;
        else pn;
    }
    else if(!isd && !isdigit(s[n])){
        if(is_sorted(all(cs))) py;
        else pn;
    }
    else pn;
}


void Dev_Sol2()
{
    int n;
    cin>>n;

    string s, cpy;
    cin>>s;

    cpy = s;

    sort(all(s));

    if(cpy==s) py;
    else pn;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        //Dev_Sol();
        Dev_Sol2();
    }

    return 0;
}

