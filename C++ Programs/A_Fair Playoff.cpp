#include <bits/stdc++.h>
using namespace std;


void Fair()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;


    int fW=max(a, b), sW=max(c, d);

    int W1=max(fW, min(c, d)), W2 = max(sW, min(a, b));


    if(W1==fW && W2==sW)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}



int main()
{
    int tc;
    cin>>tc;


    while(tc--)
    {
        Fair();
    }



    return 0;
}
