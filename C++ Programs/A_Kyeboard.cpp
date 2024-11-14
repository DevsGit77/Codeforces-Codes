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
    char ch;
    cin>>ch;

    string s, s1="qwertyuiop", s2 ="asdfghjkl;", s3="zxcvbnm,./", ans="";

    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<s1.size(); j++)
        {
            if(ch=='L' && s[i]==s1[j])
            {
                ans +=s1[j+1];
                break;
            }
            else if(ch=='R' && s[i]==s1[j])
            {
                ans += s1[j-1];
                break;
            }
        }

        for(int j=0; j<s2.size(); j++)
        {
            if(ch=='L' && s[i]==s2[j])
            {
                ans +=s2[j+1];
                break;
            }
            else if(ch=='R' && s[i]==s2[j])
            {
                ans += s2[j-1];
                break;
            }
        }

        for(int j=0; j<s3.size(); j++)
        {
            if(ch=='L' && s[i]==s3[j])
            {
                ans +=s3[j+1];
                break;
            }
            else if(ch=='R' && s[i]==s3[j])
            {
                ans += s3[j-1];
                break;
            }
        }
    }

    cout<<ans<<endl;
}


int main()
{
    speed;

    Dev_Sol();

    return 0;
}
