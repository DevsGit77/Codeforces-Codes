#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void BoringApartments()
{
    string s;
    cin>>s;

    int n = s[0]-'0';
    int r=n;
    int cn = s.size(), res;


    if(cn==1){r-=1; res=1;}
    if(cn==2){r-=1; res=3;}
    if(cn==3){r-=1; res=6;}
    if(cn==4){res=0;}


    if(n==1 && cn==4)
       cout<<10<<endl;
    else if(n==1)
        cout<<res<<endl;
    else
        cout<<r<<res<<endl;
}


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        BoringApartments();
    }


    return 0;
}
