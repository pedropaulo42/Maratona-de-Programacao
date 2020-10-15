#include <iostream>
#include <stack>

using namespace std;

int main(){
	
	string crt;
	int qt;
	int ct;
	
	cin>>qt;
	
	for(int i=0;i<qt;i++){
		
		stack<char>pilha;
		ct=0;
		cin>>crt;
		
		for (int j = 0; j <(int)crt.size(); j++){
			
			if(crt[j]=='<'){
				pilha.push('<');
			}
			else{
				
				if(crt[j]=='>'){
					
					if(!pilha.empty()){
						
						if(pilha.top()=='<'){
							ct++;
							pilha.pop();
						}
					}
				}
			}
		}
		
		cout<<ct<<endl;
	}
	
	return 0;
}