#include <unistd.h>

void	print_digit(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
}

void	print_letter(char d)
{
	write(1, &d, 1);
	write(1, "\n", 1);
}

int	main(void)
{
	print_digit(3);
	print_digit(7);
	print_digit(1);
	print_letter('A');
	print_letter('B');
	print_letter('C');
	return (0);
}
