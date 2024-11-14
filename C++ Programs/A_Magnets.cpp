#include <iostream>
using namespace std;

int main()
{
    int n, i, c = 1;
    cin>>n;
    string s[n];

    for(i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int j=0; j<n-1; j++)
    {
        if(s[j] != s[j+1])
        {
            c++;
        }
    }

    cout<<c<<endl;;


    return 0;
}
