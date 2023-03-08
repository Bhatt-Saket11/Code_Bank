#include <stdio.h>

int main()
{
	int m;
	printf("Enter a number\n");
	scanf("%d", &m);

	if(m % 2 == 0)
	{
		printf("Number is even\n");
	}

	else
	{
		printf("Number is odd\n");
	}

	return 0;
}
