#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    scanf("%d", &n);

    printf("N[0] = %d\n", n);
    for (int i = 1; i < 10; i++){
        printf("N[%d] = %d\n", i, n * 2);
        n*= 2;
    }
    
    return 0;
}