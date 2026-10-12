#include <stdio.h>
int main()
{
	int a, b, c, max;
	printf("\nCac so:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);	
	max = a;
	 if(b>max)
 	 {
		max = b;
	 }
	 if(c>max)
 	 {
		max = c;
	 }
	printf("\nSo lon nhat la: %d\n", max);
	return 0;
}
