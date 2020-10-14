#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int vet[2],s=0;
	scanf("%d%d",&vet[0],&vet[1]);
	
	if(vet[0] > 0 && vet[1] > 0){
	
		while(vet[0]!=0 && vet[1]!=0){
			
			sort(vet,vet+2);			
			if(vet[0] > 0 && vet[1] > 0){		
				s=0;
				for (int i = vet[0]; i <=vet[1] ; i++){
					cout<<i<<" ";
					s+=i;
				}
				
				cout<<"Sum="<<s<<endl;
			}
			scanf("%d%d",&vet[0],&vet[1]);
		}
	}
	
	return 0;
}