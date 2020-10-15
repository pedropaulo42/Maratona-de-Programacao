#include <bits/stdc++.h>

using namespace std;

int vet[3000001];

int main(){
	
	int t, n;
	
	scanf("%d",&t);
	
	while(t--){
		
		scanf("%d",&n);
		
		for(int i = 0 ; i < n ; i++)
			scanf("%d",&vet[i]);
			
		sort(vet,vet+n);
		
		for(int i = 0 ; i < n-1; i++)
			printf("%d ",vet[i]);
		printf("%d\n",vet[n-1]);
	}
	
	return 0;
}