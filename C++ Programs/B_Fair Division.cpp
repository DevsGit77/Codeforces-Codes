#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Fair_Division()
{
    int n;
    cin>>n;

    vector<int>v(n);

    int cnt1=0, cnt2=0;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i] == 1)
            cnt1++;
        if(v[i] == 2)
            cnt2++;
    }

    if(cnt1%2==0 && cnt2%2 == 0 || cnt1 == 0 && cnt2%2 == 0 || cnt1%2 == 0 && cnt2 == 0 || (cnt1>0 && cnt1%2 == 0 && cnt2%2 == 1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Fair_Division();
    }

    return 0;
}
