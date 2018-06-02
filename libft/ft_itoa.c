
#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t		cntr;

	cntr = 0;
	while (cntr < n)
	{
		((unsigned char *)s)[cntr] = 0;
		++cntr;
	}
}

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char *)malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}

static	size_t	ft_count_num(int n)
{
	size_t	cntr;
	int		ans;

	cntr = 0;
	ans = n;
	while (ans > 0)
	{
		ans /= 10;
		++cntr;
	}
	return (cntr);
}

static	int		ft_calc_modulator(int n)
{
	size_t	cntr;
	size_t	num_cnt;
	int		modulator;

	cntr = 0;
	num_cnt = ft_count_num(n);
	modulator = 1;
	while (cntr < num_cnt - 1)
	{
		modulator *= 10;
		++cntr;
	}
	return (modulator);
}

// Remember that num_cnt will be 1 more if sign < 0.
static	char	*ft_write_num(char *str, int n, int sign)
{
	size_t	cntr;
	int		modulator;
	int		ans;

	cntr = 0;
	modulator = ft_calc_modulator(n);
	printf("modulator is %d\n", modulator);
	if (sign < 0)
	{
		n *= -1;
		str[0] = '-';
		++cntr;
	}
	while (modulator > 1)
	{
		ans = n % modulator;
		str[cntr] = ans + 48;
		n = n - (ans * modulator);
		modulator /= 10;
		++cntr;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int		sign;
	size_t	num_cnt;
	char	*str;

	sign = (n < 0) ? -1 : 1;
	num_cnt = ft_count_num(n);
	if (sign == -1)
		++num_cnt;
	str = ft_strnew(num_cnt);
	if (!str)
		return (NULL);
	str = ft_write_num(str, n, sign);
	return (str);
}

int main(void)
{
	int x = 154345;
	int y = 0;
	int z = -158384;
	int b = +4223;
	printf("%s\n", ft_itoa(x));
	printf("%s\n", ft_itoa(y));
	printf("%s\n", ft_itoa(z));
	printf("%s\n", ft_itoa(b));
	return (0);
}