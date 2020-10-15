#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int c,n,m;
	
	cin>>c;
	
	for (int i = 0; i < c; i++){
		
		cin>>n>>m;
		
		int aux=n;
		int ct=0;
		
		while(aux>0){
			
			ct++;
			aux-=m;
		}
		
		cout<<ct<<endl;
	}
	
	return 0;
}