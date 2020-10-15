#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<string> vet;
	int n;
	string aux;
	
	while(scanf("%d",&n) != EOF){
		
		for(int i = 0 ; i < n ; i ++){
			
			cin>>aux;
			vet.push_back(aux);
		}
		
		sort(vet.begin(),vet.end());
		
		for(int i=0;i<(int)vet.size();i++)
			cout<<vet[i]<<"\n";
			
		vet.clear();
	}
	
	return 0;
}