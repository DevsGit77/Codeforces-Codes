#include <bits/stdc++.h>
#define ll long long
using namespace std;


void Template()
{
    int n, cnt=0;
    cin>>n;

    string s1, s2, s3;
    cin>>s1>>s2>>s3;

    for(int i=0; i<n; i++)
    {
        if(s1[i]==s3[i] || s2[i] == s3[i])
            cnt++;
    }

    if(cnt==n)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}



int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        Template();
    }

    return 0;
}
