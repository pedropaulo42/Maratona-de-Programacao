#include <bits/stdc++.h>
using namespace std;

int main(){

    int i = 1, j = 60;

    while(j > -1) {
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }

    return 0;
}