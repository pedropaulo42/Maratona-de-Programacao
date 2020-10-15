#include <bits/stdc++.h>

using namespace std;

int fat(int n){

    if(n==0 || n==1)
        return 1;
    else
        return fat(n-1)*n;
}

int main(){

    int n,s,tam;
    string number,aux;

    scanf("%d",&n);

    while(n!=0){

        s=0;
        number=to_string(n);
        tam=(int)number.size();

        for(int i=0;i<tam;i++){

            aux=number[i];
            s+=(atoi(aux.c_str()))*fat(tam-i);
        }

        printf("%d\n",s);
        s=0;
        scanf("%d",&n);
    }

    return 0;
}