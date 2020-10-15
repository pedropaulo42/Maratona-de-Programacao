#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, tn1, tn2, ct;
	string n1,n2;
	
	scanf("%d",&n);
	
	while(n--){
		
		ct = 0;
		cin>>n1>>n2;
		tn1 = (int)n1.size();
		tn2 = (int)n2.size();
		
		if(tn1 < tn2)
			printf("nao encaixa\n");
		else{
			
			for(int i = 0 ; i < tn2 ; i++){
				
				if(n1[(tn1-tn2)+i] == n2[i])
					ct++; 
			}
			
			if(ct == tn2)
				printf("encaixa\n");
			else
				printf("nao encaixa\n");		
		}
	}
	
	return 0;
}