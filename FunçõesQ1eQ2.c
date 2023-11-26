#include <stdio.h>

float CtoF(float C){
  float F =(C*9/5)+32;
  printf("\nSua temperatura em Fahrenheit eh: %.2f\n",F);
  return F;
}

float FtoC(float F){
  float C =(F-32)*5/9;
  printf("\nSua temperatura em Celsius eh: %.2f\n",C);
  return C;
}

int main() {
  int select;
  float tempF, tempC;

  printf("\nDigite 1 para converter C em F e 2 para converter F em C\n");
  scanf("%d",&select);

  if(select==1){
    printf("\nDigite a temperatura em Celsius: \n");
    scanf("%f",&tempC);
    CtoF(tempC);
  }

  if(select==2){
    printf("\nDigite a temperatura em Fahrenheit: \n");
    scanf("%f",&tempF);
    FtoC(tempF);
  }

  return 0;
}
