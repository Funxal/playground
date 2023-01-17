/**
 * main gets input from user and return sh
 */
#include <stdio.h>

int main(void)
{
	char sh[8];

	printf("Enter your password \n");

	fgets(sh);

	printf("Your password is ");
	puts(sh);
	return (sh);
}

