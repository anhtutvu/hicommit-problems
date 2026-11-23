#include <stdio.h>

int main(void) 
{
  int d;
  int m;
  int y;
  printf("");
  scanf("%d",&d);
  scanf("%d",&m);
  scanf("%d",&y);
  if(y<0)
  {
    printf("INVAILD");
  }
  if(1 <= m && m <= 12)
  {
    if((m==1||m==3||m==5||m==7||m==8||m==10||m==12||)&& d>=1 && d<=31)
    {
      printf("VALID");
    }
  else if((m==4||m==6||m==11||m==9||) && d>=1 && d<=30)
   {
    printf("VALID");
   }
   if(1 <= m && m <= 12 &&1<=d &&d<=30)
  {
    printf("VALID");
  }
  else
  {
    printf("INVALID");
  }
 }
  if(m==2)
  {
    if(1<=d&&d<==29&&y%400==0 || y%4==0&&y%100)
    {
      printf("VALID");
    }
    else if(1<=d&&d<==28&&y%400==0 || y%4==0&&y%100)
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