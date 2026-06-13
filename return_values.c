#include <unistd.h>

int	add(int a, int b)
{
	return (a + b);
}

int	multiply(int a, int b)
{
	return (a * b);
}

int	main(void)
{
	int result;
	int multiplyResult;

	result = add(3, 5) + '0';
	multiplyResult = multiply(2, 4) +'0';
	write(1, &result, 1);
	write(1, "\n", 1);
	write(1, &multiplyResult, 1);
	write(1, "\n", 1);
	return (0);
}
