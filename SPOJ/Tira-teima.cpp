#include <iostream>
 
using namespace std;
 
int main()
 
{
	int X,Y;
	
	cin>>X>>Y;
	
	if(X>=0 && Y>=0)
	{
		if(X<=432 && Y<=468)
		{
			cout<<"dentro";
		}
		else
		{
			cout<<"fora";
		}
	}
	else
	{
		cout<<"fora";
	}	
}