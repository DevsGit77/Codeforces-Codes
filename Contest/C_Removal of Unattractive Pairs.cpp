

/// Unsolved....


#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int max_count = 1;

    string s;
    cin>>s;

    unordered_map<char, int> smp;

    int mx = 0;


    char ch = max_element(s.begin(), s.end());

    int len = max(0, max_count - (n- max_count));

    if(n%2 == 1 && len == 0)
    {
        len = 1;
    }

    cout<<len<<endl;
s


}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
