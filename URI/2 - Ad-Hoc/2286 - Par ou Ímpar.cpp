#include <bits/stdc++.h>

using namespace std;

string vet[1000];

int main(){
	
	int n, ct = 0, a, b;
	string name1, name2;
	
	scanf("%d",&n);
	
	while(n != 0){
		
		ct++;
		
		cin>>name1;
		cin>>name2;
		
		for (int i = 0; i < n; i++){
			
			scanf("%d%d",&a,&b);
			
			if((a + b) % 2 == 0)
				vet[i] = name1;
			else
				vet[i] = name2;
		}
		
		printf("Teste %d\n",ct);
		for (int i = 0; i < n; i++)
			cout<<vet[i]<<endl;
		cout<<"\n";
		
		scanf("%d",&n);
	}
	
	return 0;
}