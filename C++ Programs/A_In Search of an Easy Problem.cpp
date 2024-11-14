#include <iostream>
using namespace std;

int main()
{
    int n,c=0;
    int a[101];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j =0; j<n; j++)
    {
        if(a[j] == 1)
        {
            c = 1;
            break;
        }
    }
    if(c == 1)
    {
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }

    return 0;
}
