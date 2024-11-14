#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;


void Small_String()
{
    int n;
    cin>>n;


    if (n > 52)
      cout << char(n - 53 + 'a') << "zz" << endl;

    else if (n == 52)
      cout << "ayz" << endl;

    else if (n < 52 && n >= 28)
      cout << "a" << char(n - 28 + 'a') << "z" << endl;

      else if(n==27)
        cout<<"aay"<<endl;

    else if (n <= 26)
      cout << "aa" << char(n - 3 + 'a') << endl;
}

int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Small_String();
    }

    return 0;
}
