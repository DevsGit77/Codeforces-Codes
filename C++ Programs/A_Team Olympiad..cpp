#include <bits/stdc++.h>
using namespace std;




int main()
{
    int n, cp = 0, cm=0, cs=0, mn;
    cin>>n;

    int a[n], p1[n], m2[n], s3[n];


    for(int i=0; i<n; i++)
    {
        cin>>a[i];


        if(a[i]==1)
        {
            cp++;
            p1[cp]=i;
        }
        else if(a[i]==2)
        {
            cm++;
            m2[cm]=i;
        }
        else
        {
            cs++;
            s3[cs]=i;
        }

    }


    mn = min(cp, min(cm, cs));

    cout<<mn<<endl;

    for(int i=1; i<=mn; i++)
    {
        cout<<p1[i]+1<<" "<<m2[i]+1<<" "<<s3[i]+1<<endl;
    }






    return 0;
}
