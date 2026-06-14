#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		i;

	dst = malloc(6);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (i < 5)
	{
		dst[i] = src[i];
		i = i + 1;
	}
	dst[5] = '\0';
	return (dst);
}

int	main(void)
{
	char	*copy;

	copy = ft_strdup("hello");
	if (copy == NULL)
		return (1);
	write(1, copy, 5);
	write(1, "\n", 1);
	free(copy);
	return (0);
}
