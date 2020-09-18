#include <stdio.h>
int main()
{
	int a, b, c, x1 , x2 , z;


	printf("input_a ");
	scanf("%d", &a);

	printf("input_b ");
	scanf("%d", &b);

	printf("input_c ");
	scanf("%d", &c);

	x1 = b * c;
	x2 = a * b;
	z = x1 + x2;
	printf("(%d * %d)+(%d * %d) = %d \n" , b, c ,a , b , z);
	return 0;
}