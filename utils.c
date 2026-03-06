#include <stdio.h>
#include "push_swap.h"

int	ft_isdigit(int d)
{
	if ((d >= '0' && d <= '9'))
		return (1);
	return (0);
}


int	ft_atoi(const char *nptr)
{
	long	result;
	int	sign;

	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\f' || *nptr == '\v')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else
	{
		sign = 1;
		if (*nptr == '+')
			nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	check_overflow(sign * result);
	return (sign * result);
}