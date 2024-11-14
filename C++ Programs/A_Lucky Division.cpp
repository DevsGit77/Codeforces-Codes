 #include <iostream>
 using namespace std;

 int main()
 {
     int n,d1,d2,d3;
     cin>>n;
     if(n>=100)
     {
         d1 = n/100;
         d2 = (n/10)%10;
         d3 = (n%10);

         if((d1==7 ||d1 ==4) && (d2==7 ||d2 ==4) && (d3==7 ||d3 ==4))
         {
             cout<<"YES"<<endl;
         }
         else if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
         {
            cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }
     else if(n==4 || n==7)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         d1 = n/10;
         d2 = n%10;

         if((d1 == 4 || d1 ==7) && (d2 ==4 || d2 ==7))
         {
             cout<<"YES"<<endl;
         }
         else if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74==0)
         {
             cout<<"YES"<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }
     }

     return 0;
 }
