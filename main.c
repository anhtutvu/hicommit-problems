#include <stdio.h>

int main() 
{
  int d;
  int m;
  int y;
  printf("");
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if(1 <= m && m <= 12 &&1<=d &&d<=31)
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }
  if(y%400==0||y%4 == 0 && y%100!=0 && 1<=d && d<= 29)
  {
    printf("VALID");
  }
  else{
    printf("INVALID");
  }
  return 0;
}