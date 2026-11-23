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
   if(1 <= m && m <= 12 &&1<=d &&d<=30)
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }
  return 0;
}