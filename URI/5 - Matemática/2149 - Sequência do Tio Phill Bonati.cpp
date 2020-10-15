#include <bits/stdc++.h>

using namespace std;

long long int tio(int n){
	
	if(n == 1)
		return 0;
	if(n == 2)
		return 1;
	if(n%2 == 0)
		return tio(n-2)*tio(n-1);
	if(n%2 != 0)
		return tio(n-2)+tio(n-1);
}

int main(){
	
	int n;
	
	while(scanf("%d",&n) != EOF)
		printf("%lld\n",tio(n));
	
	return 0;
}
