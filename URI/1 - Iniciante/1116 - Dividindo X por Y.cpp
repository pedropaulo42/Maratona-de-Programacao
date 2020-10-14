#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	float x,y;
	
	scanf("%d",&n);
	
	while(n--){
		
		scanf("%f%f",&x,&y);
		
		if(x != 0 && y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n",x/y);
	}
	
	return 0;
}