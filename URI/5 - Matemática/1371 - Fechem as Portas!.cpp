#include <bits/stdc++.h>

using namespace std;

int vet[25000021];

int main(){
	
	int n,aux,j;
	
	scanf("%d",&n);
	
	while(n != 0){
		
		aux=3;
		j=0;
		
		for (int i = 1; i <=n ;){
			
			vet[j]=i;
			i=i+aux;
			aux+=2;
			j++;
		}
		
		for (int i = 0; i <j-1; i++)
			printf("%d ",vet[i]);
			
		printf("%d\n",vet[j-1]);
		
		scanf("%d",&n);
	}
	
	return 0;
}