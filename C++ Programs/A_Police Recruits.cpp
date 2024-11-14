#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, rec=0, crimeUnt=0;

    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            rec += a[i];
        }
        else
        {
            if(rec<1)
            {
                ++crimeUnt;
            }
            else
            {
                --rec;
            }
        }
    }

    cout<<crimeUnt<<endl;


    return 0;
}

