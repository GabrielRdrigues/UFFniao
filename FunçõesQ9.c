#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int ehdigito(char c){
  if(c<='9' && c>='0'){
    printf("Eh digito");
    return 1;
  }else{
    printf("Nao eh digito");
    return 0;
  }
}

int main() {
  
  char c;
  printf("Digite um caractere: \n");
  scanf("%c",&c);
  ehdigito(c);
  
  
  return 0;
}