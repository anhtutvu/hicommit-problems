#include <stdio.h>

int main() {
  int abs;
  float gpa;
  float min;
  printf("");
  scanf("%f",&gpa);
  scanf("%f",&min);
  scanf("%d",&abs);
      if(abs>3);
  {
    printf("FAIL_ATTENDANCE");
  }
  if(gpa>=8.0 &&min>=7.0)
  {
    printf("EXCELLENT");
  }
  else if(gpa>=6.5 && min>=5.0)
  {
    printf("GOOD");
  }
  else if(gpa>=5.0 && min>=4.0)
  {
    printf("PASS");
  }
  else
  {
    printf("FAIL");
  }
  if(min<4.0)
  {
    printf("FAIL_SUBJECT");
  }
  return 0;
}