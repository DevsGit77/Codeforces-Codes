#include <bits/stdc++.h>
#define ll long long
using namespace std;




int main()
{
    int n, cnt1=1, cnt2=0;
    string str, str1, str2;


    cin>>n;
    cin>>str;

    for(int i=0; i<n-1; i++)
    {
        cin>>str1;

        if(str==str1)
        {
            cnt1++;
        }
        else
        {
            str2 = str1;
            cnt2++;
        }
    }

    if(cnt1>cnt2)
    {
        cout<<str;
    }
    else
    {
        cout<<str2;
    }



    return 0;
}
