#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;
	
	while(scanf("%d%d%d",&a,&b,&c) == 3){
		
		if(a == b && b ==c)
			printf("*\n");
		else{
			
			if(a != b && b == c)
				printf("A\n");
			else{
				
				if(a == b && b != c)
					printf("C\n");
				else
					printf("B\n");
			}
		}
	}
	
	return 0;
}