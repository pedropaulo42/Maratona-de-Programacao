#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, t;
	string frase;

	scanf("%d",&n);
	
	getchar();

	while(n--){
		
		getline(cin,frase);
		t = (int)frase.size();
		
		for(int i = (t/2)-1; i>=0 ; i --)
			cout<<frase[i];
		for(int i = t - 1 ; i >= t/2; i --)
			cout<<frase[i];
		
		cout<<"\n";
	}
	
	return 0;
}