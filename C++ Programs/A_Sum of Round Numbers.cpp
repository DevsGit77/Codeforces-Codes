#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string num;
    cin>>num;
    int cnt=0;

    for(int i=0;i<num.size(); i++)
    {
        int n = num[i]-'0';

        if(n != 0)
            cnt++;
    }
    cout<<cnt<<endl;

    int n = stoi(num);/// Integer string to integer number get..[ int n = stoi(str);]
    int i=0;

    while(n!=0)
    {
       int rem=n%10;
       if(rem!=0)
       {
           cout<<rem*pow(10,i)<<" ";
       }

       n /= 10;
       i++;
    }
    cout<<endl;

}


int main()
{
    int t;
    cin>>t;
    //while(t--)
    //solve();


    while(t--)
    {
        int n,cnt=0,r,i=0;
        cin>>n;


        r=n;
        while(r!=0)
        {
            int rem = r%10;
            if(rem!=0)
                cnt++;
            r /= 10;
        }
        cout<<cnt<<endl;

        while(n!=0)
        {
           int rem = n%10;
           if(rem!=0)
           {
               cout<<rem*pow(10,i)<<" ";
           }
           n /= 10;
           i++;
        }
        cout<<endl;
    }

    return 0;
}
