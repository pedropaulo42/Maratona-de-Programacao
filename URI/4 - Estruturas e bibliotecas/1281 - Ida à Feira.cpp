#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n, c;
	double preco, s;
	string comida;
	map<string, double> lista;
	
	scanf("%d",&t);
	
	while(t--){
		
		s = 0;
		scanf("%d",&n);
		
		while(n--){
			
			cin>>comida>>preco;
			lista[comida] = preco;
		}
		
		scanf("%d",&c);
		
		while(c--){
			
			cin>>comida>>preco;
			s += lista[comida]*preco; 
		}
		
		printf("R$ %.2lf\n",s);
	}
	
	return 0;
}