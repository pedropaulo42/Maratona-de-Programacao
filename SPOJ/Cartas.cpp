#include <iostream>
 
using namespace std;
 
int main()
 
{
	int C1,C2,C3,C4,C5;
	
	cin>>C1>>C2>>C3>>C4>>C5;
	
	if(C1>C2 && C2>C3 && C3>C4 && C4>C5)
	{
		cout<<"D"<<endl;
	}
	else
	{
		if(C5>C4 && C4>C3 && C3>C2 && C2>C1)
		{
			cout<<"C"<<endl;
		}
		else
		{
			cout<<"N"<<endl;
		}
	}
}