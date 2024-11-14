#include <bits/stdc++.h>
#define ll long long
#define fl(a,n) for (int i=a; i<n; i++)
#define maze(n) for (int i=0; i<n; i++)
#define all(v) (v).begin(), (v).end()
#define speed ios_base::sync_with_stdio(false), cin.tie(NULL)
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
using lld = long double;
using namespace std;


void Dev_Sol()
{
    int n;
    cin>>n;

    (n<8)? cout<<min(n%3, n%5)<<endl : cout<<0<<endl;

}


/// ___KOTLIN___LANGUAGE___



/** /// KOTLIN Programming language Solution


fun main() {
	val t = readLine()!!.toInt()

    repeat(t){
    	val n = readLine()!!.toInt()

        var r = n%3
        var m = n%5

        if(n<8){
        	if(r<m)
            	println(r)
            else println(m)
        }
        else {
        	println(0)
        }
    }

}



*/


int main()
{
    speed;

    int tc;
    cin>>tc;

    while(tc--)
    {
        Dev_Sol();
    }

    return 0;
}
