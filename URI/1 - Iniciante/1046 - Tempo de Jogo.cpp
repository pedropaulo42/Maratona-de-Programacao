#include <bits/stdc++.h>
using namespace std;

int main(){

    int start, end;

    scanf("%d %d", &start, &end);

    if(start > end) printf("O JOGO DUROU %d HORA(S)\n", (24 - start) + end);
    else if (start < end) printf("O JOGO DUROU %d HORA(S)\n", end - start);
    else printf("O JOGO DUROU 24 HORA(S)\n");


    return 0;
}