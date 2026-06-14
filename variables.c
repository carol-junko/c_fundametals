#include <unistd.h>

int	main(void)
{
	int		i;
	char	n;

	i = 0;
	while (i < 5)
	{
		n = i + '0';
		write(1, &n, 1);
		write(1, "\n", 1);
		i = i + 1;
	}
	return (0);
}
