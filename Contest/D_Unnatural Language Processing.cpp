#include <bits/stdc++.h>
#define ll long long
using namespace std;

void ULP()
{
    ll n;
    cin>>n;

    bool isitt = false;

    string str, sstr = "";
    cin>>str;


    for(int i=0; i<n; i++)
    {
        if(str[i]== 'a' || str[i] == 'e')
        {
            sstr += str[i];
            isitt = true;

            if((i+2)<n && (str[i+2] == 'a' || str[i+2] == 'e'))
            {
                sstr +='.';
                isitt = false;
            }
        }
        else
        {
            sstr += str[i];

            if(isitt)
            {
                isitt = false;
                sstr +='.';
            }
        }
    }

    if(sstr.back() == '.')
    {
        sstr.pop_back();
    }

    cout<<sstr<<endl;
}


int main()
{
    int t; cin>>t;
    while(t--) ULP();

    return 0;
}
