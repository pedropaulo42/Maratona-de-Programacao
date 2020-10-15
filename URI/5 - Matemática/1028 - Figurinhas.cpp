#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
	
	if(a%b==0)
		return b;
	else{
		
		return mdc(b,(a%b));
	}
}

int main(){
	
	int n,f1,f2;
	
	scanf("%d",&n);
	
	for (int i = 0; i < n; i++){
		
		scanf("%d %d",&f1,&f2);
		
		if(f1>f2)
			printf("%d\n",mdc(f1,f2));
		else
			printf("%d\n",mdc(f2,f1));
	}
	
	return 0;
}