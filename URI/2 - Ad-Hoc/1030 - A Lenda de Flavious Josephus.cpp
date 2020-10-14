#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int NC, n, k, aux, ct = 0;
	queue<int> fila;
	
	scanf("%d",&NC);
	
	for(int i = 0 ; i < NC ; i++){
		
		ct++;
		
		scanf("%d%d",&n,&k);
				
		for(int j = 1 ; j <= n ; j++)
			fila.push(j);
			
		while(!fila.empty()){
			
			for(int j = 1 ; j < k ; j++){
				
				aux = fila.front();
				fila.pop();
				fila.push(aux);
			}
			
			aux = fila.front();
			fila.pop();
		}
		
		printf("Case %d: %d\n",ct,aux);
	}
	
	return 0;
}