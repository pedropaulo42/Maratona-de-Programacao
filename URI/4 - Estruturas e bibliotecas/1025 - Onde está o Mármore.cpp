#include<bits/stdc++.h>
using namespace std;

int pecas[10001];

int main(){
	
	int N, Q, posi, j, auxQ, ct = 0;
	
	scanf("%d%d",&N,&Q);
	
	while(N != 0 || Q != 0){
		
		ct++;
		
		for(int i = 0 ; i < N ; i++)
			scanf("%d",&pecas[i]);
		
		sort(pecas,pecas+N);
		
		for(int i = 0 ; i < Q ; i++){
		
			scanf("%d",&auxQ);
			
			if(i == 0)
				printf("CASE# %d:\n",ct);
			
			posi = -2;
			j = 0;
			
			while(j != N && posi < 0){
			
				if(pecas[j] == auxQ)
					posi = j;
				
				j++;
			}
			
			if(posi+1 >= 0)
				printf("%d found at %d\n",auxQ,posi+1);
			else
				printf("%d not found\n",auxQ);
		}
		
		scanf("%d%d",&N,&Q);
	}
	
	return 0;
}