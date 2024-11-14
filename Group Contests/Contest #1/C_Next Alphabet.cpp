#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;

    if(ch=='z')
        ch = ch - 25;
    else
      ch = ch+1;



    cout<< ch <<endl;


    return 0;
}
