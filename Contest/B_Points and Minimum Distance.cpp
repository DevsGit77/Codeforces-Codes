#include <bits/stdc++.h>
using namespace std;


void solve(int t)
{
    while(t--)
    {
        int n, sum=0;
        cin>>n;

        int s[n*2];

        for(int i=0; i<(n*2); i++)
        {
            cin>>s[i];
        }
        sort(s, s+(n*2));

        for(int i=0; i<n-1; i++)
        {
            sum += abs(s[i] - s[i+1]) + abs(s[(n*2)-1-i] - s[(n*2)-2-i]);
        }
        cout<<sum<<endl;

        for(int i=0; i<n; i++)
        {
            cout<<s[i]<< " " << s[(n*2)-1-i]<<endl;
        }



    }
}


int main()
{
    int t;
    cin>>t;
    solve(t);

    return 0;
}
