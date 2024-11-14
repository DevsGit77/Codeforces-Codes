#include <bits/stdc++.h>
#define ll long long
#define fr(i,a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using lld = long double;
using namespace std;


void Joy_Sol()
{
    int a;
    cin>>a;

    if(a == 0 || a == 1)
        cout<<"10"<<endl;
    if(a == 2 || a == 4 || a == 12)
        cout<<"8"<<endl;
    if(a == 3)
        cout<<"9"<<endl;
    if(a == 5|| a == 6 || a == 7 || a == 8)
        cout<<"7"<<endl;
    if(a == 9)
        cout<<"0"<<endl;
    if(a == 10)
        cout<<"9"<<endl;
    if(a == 11)
        cout<<"6"<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Joy_Sol();
//    }

    return 0;
}

