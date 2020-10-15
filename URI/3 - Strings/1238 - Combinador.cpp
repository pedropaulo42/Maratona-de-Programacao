#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,tf1,tf2;
	string f1,f2;
	
	scanf("%d",&n);
	
	while(n--){
		
		cin>>f1>>f2;
		tf1 = (int)f1.size();
		tf2 = (int)f2.size();
		
		if(tf1 == tf2){
			
			for(int i = 0 ; i < tf1 ; i ++)
				cout<<f1[i]<<f2[i];
		}
		else{
			
			if(tf1 < tf2){
				
				for(int i = 0 ; i < tf1 ; i++)
					cout<<f1[i]<<f2[i];
				for(int i = tf1 ; i < tf2 ; i++)
					cout<<f2[i];
			}
			else{
				
				for(int i = 0 ; i < tf2 ; i++)
					cout<<f1[i]<<f2[i];
				for(int i = tf2 ; i < tf1 ; i++)
					cout<<f1[i];
			}
		}
		
		cout<<"\n";
	}
	
	return 0;
}