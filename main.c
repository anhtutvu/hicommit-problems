#include <stdio.h>

int main() 
{
  int tien;
  double d;
  printf("");
  scanf("%1f",&d);
  if(d<=1){
    tien = d*15000
  }
  if else(1<d||d>=5){
    tien = 1*15000+(d-1)*13000
  }
  if else(d>5){
    tien = 1*15000+4*13000+(d-5)*11000
  }
   printf("%d",tien); 
  return 0;
}