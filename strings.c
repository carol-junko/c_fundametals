#include <unistd.h>

int	main(void)
{
	char	name[9];

	name[0] = 'C';
	name[1] = 'a';
	name[2] = 'r';
	name[3] = 'o';
	name[4] = 'l';
	name[5] = 'i';
	name[6] = 'n';
	name[7] = 'a';
	name[8] = '\0';
	write(1, name, 9);
	write(1, "\n", 1);
	return (0);
}
