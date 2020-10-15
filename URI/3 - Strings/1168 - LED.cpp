#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n,s,i;
    string led;
    
    scanf("%d",&n);
    
    while(n--){
        
        cin>>led;
        s=0;
        i=0;
        
        while(led[i]!='\0'){
            
            if(led[i]=='0' || led[i]=='6' || led[i]=='9')
                s+=6;
            if(led[i]=='1')
                s+=2;
            if(led[i]=='2' || led[i]=='3' || led[i]=='5')
                s+=5;
            if(led[i]=='4')
                s+=4;
            if(led[i]=='7')
                s+=3;
            if(led[i]=='8')
                s+=7;
            
            i++;
        }
        
        printf("%d leds\n",s);
    }
    
    return 0;
}