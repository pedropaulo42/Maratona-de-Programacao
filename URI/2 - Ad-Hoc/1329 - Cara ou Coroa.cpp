#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,m=0,j=0,x;
	
	scanf("%d",&n);
	
	while(n != 0){
		
		while(n--){
			
			scanf("%d",&x);
			if(x == 0)
				m++;
			else
				j++;
		}
		
		printf("Mary won %d times and John won %d times\n",m,j);
		m=j=0;
		scanf("%d",&n);
	}
	
	return 0;
}