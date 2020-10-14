#include <bits/stdc++.h>
using namespace std;

int main() {

  int numberA, numberB, aux, sum = 0;

  scanf("%d%d", &numberA, &numberB);

  if(numberA > numberB) {
    aux = numberA;
    numberA = numberB;
    numberB = aux;
  }

  for(int i = numberA; i <= numberB; i++) {
    if(i % 13 != 0)
      sum += i;
  }

  printf("%d\n", sum);

  return 0;
}