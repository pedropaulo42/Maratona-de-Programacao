#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,tam;
	string cod;
	
	scanf("%d",&n);
	
	getchar();
	
	while(n--){
		
		getline(cin,cod);
		tam=(int)cod.size();
		
		for(int i=0;i<tam;i++){
				
			if((cod[i]>=97 && cod[i]<=122) || (cod[i]>=65 && cod[i]<=90))
					cod[i]=cod[i]+3;
		}
		
		reverse(cod.begin(),cod.end());
		
		for (int i =tam/2; i < tam; i++)
			cod[i]-=1;
			
		cout<<cod<<endl;
	}
	
	return 0;
}