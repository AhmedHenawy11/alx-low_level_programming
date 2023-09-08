#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point function
 * Description: 'first task practice on statemnts'
 * Return: 0
*/
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	else
	{
		printf("Last digit of %d is %d and is zero\n", n, digit);
	}
	return (0);
}

