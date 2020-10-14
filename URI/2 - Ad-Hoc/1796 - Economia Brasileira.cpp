#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, x, s = 0, i = 0;
	
	scanf("%d",&n);
	
	while(n--){
		
		scanf("%d",&x);
		
		if(x == 0)
			s++;
		if(x == 1)
			i++;
	}
	
	if(s > i)
		printf("Y\n");
	else
		printf("N\n");
	
	return 0;
}