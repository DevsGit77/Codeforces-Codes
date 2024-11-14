#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

void Sum_Of_Digits()
{
    int lsm, sod;
    cin>>lsm>>sod;

    vector<int>mxs, mns;

    if(sod==0)
    {
        if(lsm==1)
        {
            cout<<"0 0"<<endl;
            return;
        }
        else
        {
            cout<<"-1 -1"<<endl;
            return;
        }
    }

    for(int i=1; i<=lsm; i++)
    {
        int r = min(9, sod);
        mxs.push_back(r);
        sod -= r;
    }

    mns = mxs;
    sort(mns.begin(), mns.end());

    if(sod > 0)
    {
        cout<<"-1 -1"<<endl;
        return;
    }
    else
    {
        int k=0;
        while(mns[k] == 0)
            k++;
        mns[0]++;
        mns[k]--;

        for(int j=0; j<mns.size(); j++) cout<<mns[j];
        cout<<" ";
        for(int i=0; i<mxs.size(); i++) cout<<mxs[i];
        cout<<endl;
    }


}


int main()
{
    speed;

//    int tc;
//    cin>>tc;
//
//    while(tc--)
//    {
//
//    }

    Sum_Of_Digits();

    return 0;
}
