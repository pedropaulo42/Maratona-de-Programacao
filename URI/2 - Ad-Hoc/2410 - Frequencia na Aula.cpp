#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,v;
	set<int>S;
	
	cin>>n;
	
	for (int i = 0; i <n ; i++){
		
		cin>>v;
		S.insert(v);
	}
	
	cout<<S.size()<<endl;
	
	return 0;
}