#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int ct = 0,c1[5],c2[5];
	
	for(int i = 0 ; i < 5 ; i++)
		scanf("%d",&c1[i]);
	for(int i = 0 ; i < 5 ; i++)
		scanf("%d",&c2[i]);
	
	for(int i = 0 ; i < 5 ; i++){
		
		if(c1[i] == 1 && c2[i] == 0)
			ct++;
		if(c1[i] == 0 && c2[i] == 1)
			ct++;
	}
	
	if(ct == 5)
		printf("Y\n");
	else
		printf("N\n");
	
	return 0;
}