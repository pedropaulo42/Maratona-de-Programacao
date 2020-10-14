#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,i=0;
    
    scanf("%d",&n);
    
    while(i!=6){
        
        if(n%2!=0){
            i++;
            printf("%d\n",n);
        }
        n++;
    }
    
    return 0;
}