#include <bits/stdc++.h>

using namespace std;

int main(){
	
	string n;
	bool ok=true;
	
	while(cin>>n){
		
		stack<char>pilha;
	
		for (int i = 0; i <(int)n.size() ; i++){
		
			if(n[i]=='('){
			
				pilha.push('(');
			}
			else{
			
				if(n[i]==')'){
				
					if(!pilha.empty()){
					
						if(pilha.top()=='('){
						
							pilha.pop();
							ok=true;
						}
					}
					else{
					
						ok=false;
						break;
					}
				}
			}
		}
	
		if(ok && pilha.empty())
			cout<<"correct"<<endl;
		else
			cout<<"incorrect"<<endl;
			
	}
	
	return 0;
}