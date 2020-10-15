#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	string word;
	
	scanf("%d",&n);
	
	while(n--){
	
		cin>>word;
		
		if((word[0] == 'o' && word[1] == 'n') || (word[0] == 'o' && word[2] == 'e') || (word[1] == 'n' && word[2] == 'e'))
			printf("1\n");
		else{
			
			if((word[0] == 't' && word[1] == 'w') || (word[0] == 't' && word[2] == 'o') || (word[1] == 'w' && word[2] == 'o'))
				printf("2\n");
			else
				printf("3\n");
		} 	
	}
	
	return 0;
}