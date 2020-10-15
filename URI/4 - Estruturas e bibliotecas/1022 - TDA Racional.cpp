#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int ct, n1, d1, n2, d2, n, d;
	char div, sim;
	
	cin>>ct;
	
	for(int i = 0 ; i < ct ; i++){
		
		cin>>n1>>div>>d1>>sim>>n2>>div>>d2;
		
		if(sim == '+'){
			
			n = n1*d2+n2*d1;
			d = d1*d2;
			cout<<n<<"/"<<d;
		}
		else{
			
			if(sim == '-'){
				
				n = n1*d2-n2*d1;
				d = d1*d2;
				cout<<n<<"/"<<d;
			}
			else{
				
				if(sim == '*'){
					
					n = n1*n2;
					d = d1*d2;
					cout<<n<<"/"<<d;
				}
				else{
					
					if(sim == '/'){
						
						n = n1*d2;
						d = n2*d1;
						cout<<n<<"/"<<d;
					}
				}
			}
		}
		
		for(int j = 2 ; j <= 1000 ; j++){
			
			if(n%j == 0 && d%j == 0){
				
				while(n%j == 0 && d%j == 0){
					
					n = n/j;
					d = d/j;
				}
			}
		}
		
		cout<<" = "<<n<<"/"<<d<<endl;;
	}
	
	return 0;
}