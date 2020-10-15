#include <iostream>
 
using namespace std;
 
int main()
 
{
	int L,D,K,P,div,mul,S;
	
	cin>>L>>D;
	cin>>K>>P;
	
	div=L/D;
	mul=L*K;
	
	S=mul+(div*P);
	
	cout<<S;	
}