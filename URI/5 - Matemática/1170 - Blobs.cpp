#include <bits/stdc++.h>

using namespace std;

int main (){
	
	int N,day;
	double C;
	
	cin>>N;
	
	for (int i = 0; i < N; i++){
		
		day=0;
		
		cin>>C;
		
		while(C>1){
			
			C=C/2;
			
			day++;
		}
		
		cout<<day<<" dias"<<endl;
	}
	
	return 0;
}