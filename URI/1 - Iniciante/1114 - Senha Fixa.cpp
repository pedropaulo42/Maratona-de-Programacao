#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int senha;
    
    scanf("%d",&senha);
    
    if(senha!=2002){
    
		while(senha!=2002){
     
			printf("Senha Invalida\n");
            
			scanf("%d",&senha); 
		}
		
		printf("Acesso Permitido\n");
	}
	else
		printf("Acesso Permitido\n");
    
    return 0;   
}