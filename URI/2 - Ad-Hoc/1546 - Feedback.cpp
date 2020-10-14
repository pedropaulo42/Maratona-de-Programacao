#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t, n , x;
	
	scanf("%d",&t);
	
	while(t--){
		
		scanf("%d",&n);
		
		while(n--){
			
			scanf("%d",&x);
			
			if(x == 1)
				printf("Rolien\n");
			if(x == 2)
				printf("Naej\n");
			if(x == 3)
				printf("Elehcim\n");
			if(x == 4)
				printf("Odranoel\n");
		}
	}
	
	return 0;
}