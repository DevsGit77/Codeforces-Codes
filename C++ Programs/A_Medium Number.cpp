
#include <iostream>
using namespace std;

void midNum()
{
	int ara[3];

	for(int i=0; i<3; i++)
	{
		cin>>ara[i];
	}

	sort(ara, ara+3);

	cout<<ara[1]<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		midNum();
	}
}
