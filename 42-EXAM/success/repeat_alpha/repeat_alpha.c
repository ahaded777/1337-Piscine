#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int i;
		int c;

		i = 0;
		while (av[1][i])
		{
			c = 0;
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				c = av[1][i] - 'a' + 1;
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				c = av[1][i] - 'A' + 1;
			}
			else
			{
				write(1, &av[1][i], 1);
			}

			for (int j = 0; j < c; j++)
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}

	write(1, "\n", 1);
	return 0;
}
