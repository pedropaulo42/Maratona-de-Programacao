#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double L;
	
	scanf("%lf",&L);
	
	while(L != 0){
		
		printf("%.6lf\n",(((L-3)+L)-L)/L);
		scanf("%lf",&L);
	}
	return 0;
}