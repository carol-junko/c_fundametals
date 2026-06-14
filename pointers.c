#include <unistd.h>

void	ft_swap(int *a, int*b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int		a;
	int		b;
	char	c;

	a = 3;
	b = 5;
	ft_swap(&a, &b);
	c = a + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	c = b + '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
