#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Two_Buttons()
{
    int cn, dn, count=0;
    cin>>cn>>dn;

    while(dn != cn)
    {
        if(cn<dn && dn%2==0)
            dn /= 2;
        else
            dn++;

        count++;
    }
    cout<<count<<endl;
}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    Two_Buttons();


    return 0;
}
