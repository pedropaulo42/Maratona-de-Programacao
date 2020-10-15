#include <bits/stdc++.h>

using namespace std;

int vet[1001];

int main(){
	
	int c,n,aux,j;
	
	scanf("%d",&c);
	
	while(c--){
		
		scanf("%d",&n);
		
		aux=3;
		j=0;
		
		for (int i = 1; i <=n ;){
			
			vet[j]=i;
			i=i+aux;
			aux+=2;
			j++;
		}
		
		printf("%d\n",n-j);
	}
	
	return 0;
}