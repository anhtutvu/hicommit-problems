#include <stdio.h>

int main() {
  float w;
  float h;
  float BMI;
  scanf("%f",&w);
  scanf("%f",&h);
  BMI=w/((h/100)*(h/100));
  if (BMI>=30.0f){
    printf("OBESE");
  } 
  else if ((BMI<29.9999f)&&(BMI>=24.9999f)){
    printf("OVERWEIGHT");
  }
  else if ((BMI<24.9999f) && (BMI>=18.5)){
    printf("NORMAL");
  }
  else if (BMI<18.5){
    printf("UNDERWEIGHT");
  }
  return 0;
}