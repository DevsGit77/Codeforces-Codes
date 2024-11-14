#include <bits/stdc++.h>
#define ll long long
using namespace std;


void ArrangingCats(){

    int n, c1 = 0, c2 = 0, res;
    cin>>n;

    string str1,str2;

    cin>>str1>>str2;


    for(int i=0; i<n; i++)
    {

        if (str1[i] == '0' && str1[i] != str2[i])
            c1++;

        if (str2[i] == '0' && str2[i] != str1[i])
            c2++;
    }

    res = max(c1, c2);

    cout<<res<<endl;
}


int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ArrangingCats();
    }

    return 0;
}
