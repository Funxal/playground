#include <stdio.h>

/**
 * _square - function that compute the square of any input
 * @c: int
 *
 * Return: always 0
 */
long unsigned int _square(int c);
int main(void)
{
	int r;
	long unsigned int t;

	printf("Please enter your favourite number ");
	scanf("%d", &r);
	
	t = _square(r);
	printf("The square of your favourite number is %lu\n", t); 
	t = _square(71);
	printf("%lu\n", t);
	t = _square(2);
	printf("%lu\n", t);
	return (0);
}

long unsigned int _square(int c)
{
	long unsigned y;

	y = c * c;
	return (y);
}


