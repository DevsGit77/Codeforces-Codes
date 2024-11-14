//#include <bits/stdc++.h>
//#define ll long long
//using namespace std;
//
//
//void solve(int t)
//{
//    while(t--)
//    {
//        int l, sum2=0, sum1=0;
//        char fc, lc;
//
//        string s,cs;
//        cin>>s;
//        l = s.size();
//
//        cs = s;
//
//
//        fc = s[0];
//        lc = s[l-1];
//
//        if(fc==lc)
//        {
//            cout<<"NO"<<endl;
//        }
//
//        else
//        {
//            for(int i=0; i<l; i++)
//            {
//                if(s[i] == fc)
//                {
//                    s[i] = 1;
//                }
//                else if(s[i] == lc)
//                {
//                    s[i] = -1;
//                }
//                else
//                    s[i] = 1;
//
//
//                sum1 += s[i];
//            }
//
//
//            for(int i=0; i<l; i++)
//            {
//                if(cs[i] == fc)
//                {
//                    cs[i] = 1;
//                }
//                else if(cs[i] == lc)
//                {
//                    cs[i] = -1;
//                }
//                else
//                    cs[i] = -1;
//
//
//                sum2 += cs[i];
//            }
//
//            if(sum1 == 0 || sum2 == 0)
//            {
//                cout<<"YES"<<endl;
//            }
//            else
//            {
//                cout<<"NO"<<endl;
//            }
//        }
//
//    }
//}
//
//
//
//
//
//int main()
//{
//    int t;
//    cin>>t;
//
//    solve(t);
//
//
//    return 0;
//}




#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        int f[3] = {0};
        f[s[0] - 'A'] = 1;
        f[s.back() - 'A'] = -1;

        ///cout<<s[0] - 'A'<<" "<<s.back() - 'A'<<endl;

        int  cnt = 0;

        for(int i = 0; i < s.size(); i++)
        {
            cnt += f[s[i] - 'A'];
        }

        for(int i = 0; i < 3; i++)
        {
            if(f[i] == 0)
            {
                f[i] = 1 - 2 * (cnt > 0);
                cout<< 2 * (cnt > 0)<<endl;
            }
        }

        cnt = 0;
        string ans = "YES";
        for(int i = 0; i < s.size(); i++)
        {
            cnt += f[s[i] - 'A'];
            if(cnt < 0)
            {
                ans = "NO";
                break;
            }
        }

        if(cnt)
        {
            ans = "NO";
        }

        cout << ans <<endl;
    }

    return 0;

}




