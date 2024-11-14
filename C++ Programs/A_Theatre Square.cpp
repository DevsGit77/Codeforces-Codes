#include <iostream>

using namespace std;

int main()
{
    long long int h,w,n,hc,wc;

    cin>>h>>w>>n;

    if(h%n == 0)
    {
        hc = h/n;
    }
    else
    {
        hc = (h/n)+1;
    }

    if(w%n == 0)
    {
        wc = w/n;
    }
    else
    {
        wc = (w/n)+1;
    }

    cout<<hc*wc<<endl;

    return 0;
}
