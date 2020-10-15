#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, contador = 0;

    scanf("%d",&n);

    while(n != -1){

        contador++;

        printf("Experiment %d: %d full cycle(s)\n", contador, n/2);

        scanf("%d",&n);
    }

    return 0;
}