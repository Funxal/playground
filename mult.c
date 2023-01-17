#include <stdio.h>
#include "main.h"

int main(void)
{
	int sum;

	sum = add(5, 3);
	printf("5 multiplied by 3 is %d.\n", sum);
		return (0);
}

int add(int x, int y)
{
	int mult;

	mult = x * y;
	return (mult);
}
