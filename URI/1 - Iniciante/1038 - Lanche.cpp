#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int c,q;
	double aux;
	
	cin>>c>>q;
	
	if(c==1){
		
		aux=q*4.00;
		printf("Total: R$ %.2lf\n",aux);
	}
	else{
		
		if(c==2){
			
			aux=q*4.50;
			printf("Total: R$ %.2lf\n",aux);
		}
		else{
			
			if(c==3){
				
				aux=q*5.00;
				printf("Total: R$ %.2lf\n",aux);
			}
			else{
				
				if(c==4){
					
					aux=q*2.00;
					printf("Total: R$ %.2lf\n",aux);
				}
				else{
					
					aux=q*1.50;
					printf("Total: R$ %.2lf\n",aux);
				}
			}
		}
	}
	
	return 0;
}