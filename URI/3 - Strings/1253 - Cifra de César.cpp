#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, trc;
	string cifra;
	
	scanf("%d",&n);
	
	while(n--){
		
		cin>>cifra;
		scanf("%d",&trc);
		
		for (int i = 0; i < (int)cifra.size(); i++){
			
			for (int j = 0; j < trc; j++){
				
				if((cifra[i] - 1) < 65)
					cifra[i] = 'Z';
				else
					cifra[i] = cifra[i] - 1;
			}
		}
		
		cout<<cifra<<endl;
	}
	
	return 0;
}