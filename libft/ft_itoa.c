
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
	if (n < 0) 
	    n *= -1;
	ans = n;
	while (ans > 0)
	{
		ans /= 10;
		++cntr;
	}
	return (cntr);
}

static	int		ft_calc_divisor(int n)
{
	size_t	cntr;
	size_t	num_cnt;
	int		divisor;

	cntr = 0;
	num_cnt = ft_count_num(n);
	divisor = 1;
	while (cntr < num_cnt - 1)
	{
		divisor *= 10;
		++cntr;
	}
	return (divisor);
}

// Remember that num_cnt will be 1 more if sign < 0.
static	char	*ft_write_num(char *str, int n, int sign)
{
	size_t	cntr;
	int		divisor;
	int		ans;

	cntr = 0;
	divisor = ft_calc_divisor(n);
	printf("n passed in is %d\n", n);
	printf("divisor is %d\n", divisor);
	if (sign < 0)
	{
		n *= -1;
		str[0] = '-';
		++cntr;
	}
	printf("n is now %d\n", n);
	while (divisor > 0)
	{
		ans = n / divisor;
		printf("ans is %d\n", ans);
		str[cntr] = ans + 48;
		n = n - (ans * divisor);
		divisor /= 10;
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
	printf("num_cnt is %zu\n", num_cnt);
	str = ft_strnew(num_cnt);
	if (!str)
		return (NULL);
	if (str)
	    printf("str is non-null");
	str = ft_write_num(str, n, sign);
	return (str);
}

int main(void)
{
	int x = -4735;
	printf("%s\n", ft_itoa(x));
	return (0);
}