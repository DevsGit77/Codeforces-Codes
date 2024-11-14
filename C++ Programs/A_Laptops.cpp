#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Laptops()
{
    int n;
    cin>>n;

    bool ck = true;

    while(n--)
    {
        int a, b;
        cin>>a>>b;

        if(a!=b)
        {
            cout<<"Happy Alex"<<endl;
            return;
        }

    }
    cout<<"Poor Alex"<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
        Laptops();
    //}

    return 0;
}
