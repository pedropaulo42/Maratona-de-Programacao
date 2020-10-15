#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,n1,n2;
	char c;
	
	scanf("%d",&n);
	
	while(n--){
		
		cin>>n1>>c>>n2;
		
		if(n1!=n2){
			
			for(int i = 5 ; i <=10 ; i ++){
				
				cout<<n1<<" x "<<i<<" = "<<n1*i<<" && ";
				cout<<n2<<" x "<<i<<" = "<<n2*i<<endl;
			}
		}
		else{
			
			for(int i = 5 ; i <=10 ; i ++)
				cout<<n1<<" x "<<i<<" = "<<n1*i<<endl;
		}
	}
	
	return 0;
}