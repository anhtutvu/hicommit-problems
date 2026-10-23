#include <stdio.h>

int main() {
  float dtb;
  scanf("%f",&dtb);
  if (dtb<=10.0 && dtb>=9.0) {
    printf("A");
  }
  else if (dtb<=8.9 && dtb>=8.0)
  {
    printf("B+");
  }
  else if (dtb<=7.9 && dtb>=7.0)
  {
    printf("B");
  }
  else if (dtb<=6.9 && dtb>=6.5)
  {
    printf("C+");
  }
  else if (dtb<=6.4 && dtb>=5.5)
  {
    printf("C");
  }
  else if (dtb<=5.4 && dtb>=5.0){
    printf("D+");
  }
  else if (dtb<=4.9 && dtb>=4.0){
    printf("D");
  }
  else 
  {
    printf("F");
  }
  return 0;
}