#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, c;
	cin>>a; 
	cin>>b; 
	
	if(a<b)	
		c=(b%a); 
	else
		c=(a%b);
		
	if(c==0)
		cout<<"Sao Multiplos"<<endl;
	else
		cout<<"Nao sao Multiplos"<<endl;
	
	return 0;
}