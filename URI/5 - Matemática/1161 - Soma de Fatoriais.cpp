#include <bits/stdc++.h>

using namespace std;

long long int fat(long long int n){
	
	if(n==0 || n==1)
		return 1;
	
	return fat(n-1)*n;
}

int main(){

	long long int m,n;

	while(cin>>m>>n)
		cout<<fat(m)+fat(n)<<endl;
	
	return 0;
}