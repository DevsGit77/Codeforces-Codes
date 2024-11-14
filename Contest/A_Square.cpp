#include <bits/stdc++.h>
#define ll long long
using namespace std;



void Square()
{
    ll a[4];
    ll b[4];
    ll len, res;

    for (int i = 0; i < 4; i++) {
        cin >> a[i] >> b[i];
    }


    sort(a, a + 4);
    sort(b, b + 4);

    len = max(a[2] - a[1], b[2] - b[1]);

    res = len*len;
    cout << res << endl;


}


int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        Square();
    }

    return 0;
}
