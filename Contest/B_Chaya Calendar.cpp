#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Calender()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int f = v[0];

    for(int i=1; i<n; i++)
    {
        f = ( f/v[i] + 1) * v[i];
    }

    cout<<f<<endl;

}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Calender();
    }

    return 0;
}
