#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Dev_Sol()
{
    string s;
    cin>>s;

    set<char>st;

    for(int i=0; i<s.length(); i++)
        st.insert(s[i]);

    if(st.size()==1)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        cout<<s[s.length()-1];
        for(int i=0; i<s.length()-1; i++)
            cout<<s[i];
        cout<<endl;
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

