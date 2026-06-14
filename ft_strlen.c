#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return (i);
}

int	main(void)
{
	char	*name;
	char	lengt;

	name = "Carolina";
	lengt = ft_strlen(name);
	lengt = lengt + '0';
	write(1, &lengt, 1);
	write(1, "\n", 1);
	return (0);
}
