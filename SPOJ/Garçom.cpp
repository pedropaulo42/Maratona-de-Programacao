#include <iostream>
 
using namespace std;
 
int main ()
 
{
	int N,Cc,I,L,C;
	
	cin>>N;
	
	for(Cc=0, I=0;I<N;I++)
	{
		cin>>L;
		cin>>C;
		
		if(L>C)
		{
			Cc=Cc+C;
		}	
	}
	
	cout<<Cc;
}