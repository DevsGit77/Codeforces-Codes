#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Vlad()
{
    string line;
    cin>>line;

    int cA=0, cB =0;
    for(int i=0; i<line.size(); i++)
    {
        if(line[i] == 'A')
            cA++;
        else
            cB++;
    }

    if(cA>cB)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Vlad();
    }

    return 0;
}
