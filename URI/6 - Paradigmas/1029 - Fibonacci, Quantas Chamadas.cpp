#include<bits/stdc++.h>
using namespace std;

int fib(int n, int &ct){
	
	ct++;
	
	if(n == 0 || n == 1)
		return n;
	else
		return fib(n-1,ct) + fib(n-2,ct);
}

int main(){
	
	int N,aux,ct = -1,x;
	
	scanf("%d",&N);
	
	for(int i = 0 ; i < N ; i++){
	
		scanf("%d",&x);	
		aux = fib(x,ct);
		printf("fib(%d) = %d calls = %d\n",x,ct,aux);
		
		ct = -1;
	}
	return 0;
}