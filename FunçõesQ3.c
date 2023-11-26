#include <stdio.h>

int ehprimo(int x){
  int i, divisores = 0;
  for(i = 1; i <= x; i++){
    if(x % i == 0){
      divisores++;
    }
  }
  return divisores;
}


int main() {
  int pp;
  printf("\nDigite um número: ");
  scanf("%d",&pp);
  if(ehprimo(pp) == 2){
    printf("Eh primo!");
    return 1;
  }else{
    printf("Nao eh primo!");
  }



  return 0;
}
