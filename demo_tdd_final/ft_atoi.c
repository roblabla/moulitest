int		ft_atoi(const char *str)
{
	long	value;
	int		sign;

	value = 0;
	sign = 1;
	while ((*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' '))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value *= 10;
		value += (long)(*str - '0');
		str++;
	}
	if (((int)(value * sign) == 0 && value != 0) || (value < 0))
	{
		value = (sign < 0) ? 0 : -1;
	}
	return (int)(value * sign);
}