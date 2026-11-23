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

}
  return 0;
}