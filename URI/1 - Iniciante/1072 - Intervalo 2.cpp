#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,x,cti=0,ctn=0;
    
    scanf("%d",&n);
    
    while(n--){
        
        scanf("%d",&x);
        
        if(x>=10 && x<=20)
            cti++;
        else
            ctn++;
    }
    
    printf("%d in\n",cti);
    printf("%d out\n",ctn);
    
    return 0;
}