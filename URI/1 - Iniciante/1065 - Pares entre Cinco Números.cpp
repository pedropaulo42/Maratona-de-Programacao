#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,ct=0;
    
    for(int i=0;i<5;i++){
        
        scanf("%d",&n);
        
        if(n%2==0)
            ct++;
    }
    
    printf("%d valores pares\n",ct);
    
    return 0;
}