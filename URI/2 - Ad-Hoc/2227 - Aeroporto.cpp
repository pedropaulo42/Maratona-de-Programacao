#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a,v,x,y,pos,maior=0,test=0;
    
    scanf("%d%d",&a,&v);
    
    while(a!=0 && v!=0){
        
        int vet[a+1]={0};
        maior=0;
        pos=0;
        test++;
        
        for (int i = 0; i < v; i++){
            
            scanf("%d%d",&x,&y);
            
            vet[x]=vet[x]+1;
            vet[y]=vet[y]+1;
        }
        
        for (int i = 1; i <=a ; i++){
            
            if(vet[i]>=maior){
                maior=vet[i];
                pos=i;
            }
        }
        
        cout<<"Teste "<<test<<endl;
        for (int i = 1; i <=a ; i++){
            
            if(vet[i]>=vet[pos])
                cout<<i<<" ";
        }
        
        cout<<"\n\n";
        
        scanf("%d%d",&a,&v);
    }
    
    return 0;
}