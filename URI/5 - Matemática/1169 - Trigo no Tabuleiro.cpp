#include <bits/stdc++.h>

using namespace std;

int main(){
	
	long long int n,x;
	
	cin>>n;
	
	while(n--){
		
		cin>>x;
		cout<<(long long int)((pow(2,x)-1)/12)/1000<<" kg"<<endl;
	}
	
	return 0;
}