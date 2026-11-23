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
  if(1 <= m && m <= 12)
  {
    printf("VALID");
  }
  else
  {
   printf("INVALID"); 
  }
  if(m=1,3,5,7,8,10,12)
  {
    d=31;
    printf("VALID");
  }
  else if(m=4,6,9,11)
  {
    d=30;
    printf("VALID");
  }
  if(y%400==0||y%4 == 0 && y%100!=0)
  {
    m=29;
    printf("VALID");
  }
  else{
    m=28;
    printf("VALID");
  }
  return 0;
}