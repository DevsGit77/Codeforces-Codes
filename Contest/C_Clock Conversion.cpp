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
    string s;
    cin>>s;

    string hh="", mm="", st="";

    hh += s[0];
    hh += s[1];

    mm += s[3];
    mm += s[4];

    int h = stoi(hh), m = stoi(mm);

    if(h<12)
        st += " AM";
    else
        st += " PM";

    if(h==0)
    {
        cout<<"12"<< ":"<<mm<<st<<endl;
        return;
    }


    if (h > 12)
        h -= 12;

    if (h <= 9)
        cout<<"0"<<h<<":"<<mm<<st<<endl;
    else
        cout<<h<< ":"<<mm<<st<<endl;
}



int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Joy_Sol();
    }

    return 0;
}
