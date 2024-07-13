int	ft_atoi(const char *str)
{
	int i;
	int r;
	int s;

	i = 0;
	r = 0;
	s = 1;
	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;

	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			s *= -1;
		}
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - '0');
		i++;
	}

	return (s * r);
}
