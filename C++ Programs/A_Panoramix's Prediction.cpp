#include <bits/stdc++.h>
#define ll long long
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
using namespace std;

bool PrimeDetect(int num)
{
    for(int i=2; i*i<= num; i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

void Prediction()
{
    int n, m, p;
    cin>>n>>m;



    for(p=n+1; p<=m; p++)
    {
        if(PrimeDetect(p))
        {
            if(p==m)
                cout<<"YES\n";
            else
                cout<<"NO\n";
            return;
        }
    }
    cout<<"NO"<<endl;

}


int main()
{
    speed;

    Prediction();


    return 0;
}
