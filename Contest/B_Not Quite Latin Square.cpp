#include <bits/stdc++.h>
#define ll long long
using namespace std;

void matrix()
{
    char ara[3][3];

    int qr, qc;

    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            cin>>ara[r][c];

            if(ara[r][c] == '?')
            {
                qr = r;
                qc = c;
            }
        }
    }

    set<char>s;
    s.insert('A');
    s.insert('B');
    s.insert('C');


    for(int r=0; r<3; r++)
    {
        for(int c=0; c<3; c++)
        {
            if(r==qr || c == qc)
            {
                s.erase(ara[r][c]);
            }
        }
    }

    cout<<*s.begin()<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        matrix();
    }

    return 0;
}
