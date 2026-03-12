#include "../push_swap.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t				count;
	unsigned char		*z;

	z = s;
	count = 0;
	while (count < n)
	{
		*z = '\0';
		z++;
		count++;
	}
	return (z);
}