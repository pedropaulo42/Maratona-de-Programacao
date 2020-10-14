#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string op;
    
    while(getline(cin,op)){
        
        if(op=="esquerda")
            printf("ingles\n");
        if(op=="direita")
            printf("frances\n");
        if(op=="nenhuma")
            printf("portugues\n");
        if(op=="as duas")
            printf("caiu\n");
    }
    
    
    return 0;   
}