#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int ct = 0;
	long long int fp, fh, at, lg;
	
	while(scanf("%lld %lld",&fp,&fh) != EOF){
		
		ct++;
		
		lg = (fp*5 + fh*6)/2;
		at = 2 + lg - fp - fh;
		
		printf("Molecula #%d.:.\nPossui %lld atomos e %lld ligacoes\n\n",ct,at,lg);
	}
	
	return 0;
}