#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Minimalsq()
{
    int a, b;
    cin>>a>>b;

    cout<<pow(min(max(2*a, b) , max(a , 2*b)), 2)<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Minimalsq();
    }

    return 0;
}
