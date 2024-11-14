#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n, cm=0, cc=0;
    cin>>n;


    while(n--)
    {
        int m, c;
        cin>>m>>c;

        if(m>c)
            cm++;
        else if(m<c)
            cc++;
        else if(m==c)
        {
            cm++;
            cc++;
        }
    }


    if(cm < cc)
        cout<<"Chris"<<endl;
    else if(cm>cc)
        cout<<"Mishka"<<endl;
    else if(cm == cc)
        cout<<"Friendship is magic!^^"<<endl;



    return 0;
}

