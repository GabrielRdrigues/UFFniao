#include <stdio.h>

int main(){

  int A[1000][1000];
  int soma[1000][1000];
  int i,N,j,aux=0;
  
  scanf("%d",&N);
  printf("Eh simetrica ?\n");
  printf("Digite a matriz: \n");
  
  //Declarando uma matriz de tamanho "N"
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      scanf("%d",&A[i][j]); 
    }
  }
  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      if(A[i][j]==A[j][i]){
      }else{
      aux=1;
      i=N+1;
      }
    }
  }
  if(aux!=0){
    printf("Não eh\n");
  }else{
    printf("Eh\n");
  }
  
    return 0;
}
