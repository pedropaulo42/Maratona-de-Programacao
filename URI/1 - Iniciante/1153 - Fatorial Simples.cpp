#include <bits/stdc++.h>

using namespace std;

int fat(int n){
	
	if(n==0 || n==1)
		return 1;
		
	return fat(n-1)*n;
}

int main(){
	
	int n;
	
	scanf("%d",&n);
	
	printf("%d\n",fat(n));
	
	return 0;
}