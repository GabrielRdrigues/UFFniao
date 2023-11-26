#include <stdio.h>


void multiplicaM(int A[10][10], int B[10][10], int Res[10][10], int n){
  

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      Res[i][j]=0;
      for(int k=0;k<n;k++){
        Res[i][j] += A[i][k] * B[k][j];
      }
    }
  } 
}
int main(){
  int A[10][10],B[10][10],Res[10][10],n,i,j;
  
  printf("\nDigite o tamanho da matriz: \n");
  scanf("%d",&n);
  printf("\nDeclare a matriz A: \n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      
      scanf("%d",&A[i][j]);
    }
  }
  printf("\nDeclare a matriz B: \n");
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){

      scanf("%d",&B[i][j]);
    }
  }
  multiplicaM(A,B, Res, n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",Res[i][j]);
      if(j==n-1){
        printf("\n");
      }
      
    }
  }


return 0;
}