#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a, b, c, d;
	
	while(scanf("%d%d%d%d",&a,&b,&c,&d),a || b  || c || d)
		printf("%.5lf\n",(((a/2.0)+b)*c)/d);
	
	return 0;
}