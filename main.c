#include <stdio.h>

int main() {
  int w;
  int h;
  float BMI;
  scanf("%d",&w);
  scanf("%d",&h);
  BMI=w/(h/100)*(h/100);
  if (BMI>=30){
    printf("OBESE");
  } 
  else if (BMI<=30 && BMI>=25){
    printf("OVERWEIGHT");
  }
  else if (BMI<=25 && BMI>=18.5){
    printf("NORMAL");
  }
  else if (BMI<=18.5){
    printf("UNDERWEIGHT");
  }
  return 0;
}