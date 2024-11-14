#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int i;
    string d;
    cin>>d;

    for (i = 0; i<d.size(); i++)
    {
        if(d[i]=='W' && d[i+1]=='U' && d[i+2]=='B')
        {
            i+=2;
            cout<<" ";
        }
        else
        {
            cout<<d[i];
        }
    }


    return 0;
}
