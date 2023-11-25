#include <stdio.h>

int main(){

  int A[1000][1000];
  int B[1000][1000];
  int soma[1000][1000];
  int i,N,j;
  
  scanf("%d",&N);
  
  //Declarando uma matriz de tamanho "N"
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      scanf("%d",&A[i][j]);
    }
  }
  printf("\n");
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      scanf("%d",&B[i][j]);
    }
  }
  printf("\n");
  //Agora soma essa desgraça toda!
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      soma[i][j]= A[i][j]+B[i][j];
      printf("%d ", soma[i][j]);
    }
    printf("\n");
  }
  printf("\n");
    return 0;
}