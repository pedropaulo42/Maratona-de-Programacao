#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double n;
	int ct=0;
	
	for(int i=0;i<6;i++){
		
		cin>>n;
		
		if(n>0)
			ct++;
	}
	
	cout<<ct<<" valores positivos"<<endl;
	
	return 0;
}