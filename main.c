#include <stdio.h>

int main() {
  int w;
  int h;
  int BMI;
  scanf("%d",&w,&h);
  BMI=w/(h/100)^2
  if (BMI>=30)
  {
    printf("OBESE");
  }
  else if (BMI<30 && BMI>=25){
    printf("OVERWEIGHT")
  }
  else if (BMI<25 && BMI>=18.5){
    printf("NORMAL");
  }
  else if (BMI<18.5)
  {
    printf("UNDERWEIGHT");
  }
  return 0;
}