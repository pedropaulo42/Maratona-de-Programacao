#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,x,y;
	int r,b,c;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		cin>>x>>y;
		
		r=pow(3*x,2)+y*y;
		b=2*pow(x,2)+pow(5*y,2);
		c=-100*x+pow(y,3);
		
		if(r>b && b>c){
			
			cout<<"Rafael ganhou"<<endl;
		}
		else{
			
			if(r>c && c>b){
				
				cout<<"Rafael ganhou"<<endl;
			}
			else{
				
				if(b>r && r>c){
					
					cout<<"Beto ganhou"<<endl;
				}
				else{
					
					if(b>c && c>r){
						
						cout<<"Beto ganhou"<<endl;
					}
					else{
						
						if(c>r && r>b){
							
							cout<<"Carlos ganhou"<<endl;
						}
						else{
							
							cout<<"Carlos ganhou"<<endl;
						}
					}
				}
			}
			
		}
		
		
	}

	return 0;
}