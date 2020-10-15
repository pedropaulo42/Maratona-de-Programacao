#include <iostream>
 
using namespace std;
 
int main()
 
{
	int P1,C1,P2,C2,E,D;
	
	cin>>P1>>C1>>P2>>C2;
	
	E=P1*C1;
	
	D=P2*C2;
	
	if(E==D)
	{
		cout<<0<<endl;
	}
	else
	{
		if(E>D)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<"1"<<endl;
		}
	}
}