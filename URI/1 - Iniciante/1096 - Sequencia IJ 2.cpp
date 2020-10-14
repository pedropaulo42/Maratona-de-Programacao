#include <bits/stdc++.h>
using namespace std;

int main(){

    int i = 1, j = 7;

    while(i < 11) {

        for (int k = 0; k < 3; k++)
            printf("I=%d J=%d\n", i, j - k);

        i += 2;
    }

    return 0;
}