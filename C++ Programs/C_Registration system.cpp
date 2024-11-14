#include <bits/stdc++.h>
#include<map>
using namespace std;


void solve(int t)
{
    string name;
    map<string,int> regist;

    while(t--)
    {
        cin>>name;


        if(regist[name] == 0)
        {
            regist[name] = 1;
            cout<<"OK"<<endl;
        }
        else
        {
            cout<<name<<regist[name]<<endl;
            regist[name]++;
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

