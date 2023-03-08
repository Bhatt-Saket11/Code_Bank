#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter the two numbers to be multiplied \n");
	scanf("%d%d", &a, &b);

	c = a * b;
	
	printf("The product is %d", c);

	return 0;
}
