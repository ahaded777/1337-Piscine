#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if(ac != 4)
	{
		write(1, "\n", 1);
		return 0;
	}
	
	int num1 = atoi(av[1]);
	int num2 = atoi(av[3]);

	int ru = 0;

	if(*av[2] == '+')
	{
		printf("%d", num1 + num2);
	}
	else if(*av[2] == '-')
	{
		printf("%d", num1 - num2);
	}
	else if(*av[2] == '*')
	{ 
		printf("%d", num1 * num2);
	}
	else if(*av[2] == '/')
	{
		printf("%d", num1 / num2);
	}
	else if(*av[2] == '%')
	{
		printf("%d", num1 % num2);
	}

	printf("\n");
	return (0);
}
