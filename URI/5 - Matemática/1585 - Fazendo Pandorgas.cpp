#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, a, b;
	
	scanf("%d",&n);
	
	while(n--){
		
		scanf("%d%d",&a,&b);
		
		printf("%d cm2\n",(a*b)/2);
	}
	
	return 0;
}