#include <bits/stdc++.h>

using namespace std;

int vet[51];

int main(){
	
	int t, n, pi , aux, ct, menor;
	
	scanf("%d",&t);
	
	while(t--){
		
		ct = 0;
		scanf("%d",&n);
		
		for(int i = 0 ; i < n ; i++)
			scanf("%d",&vet[i]);
		
		for(int j = 0 ; j < n ; j++){
		
			for(int i = 0 ; i < n-1; i++){
				
				if(vet[i] > vet[i+1]){
					
					ct++;
					menor = vet[i];
					vet[i] = vet[i+1];
					vet[i+1] = menor;
				}
			}
		}
		
		printf("Optimal train swapping takes %d swaps.\n",ct);
	}
	
	return 0;
}