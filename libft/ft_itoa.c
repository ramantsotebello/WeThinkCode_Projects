
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
	long	ans;

	cntr = 0;
	ans = n;
	if (ans < 0) 
	    ans *= -1;
	printf("num_cnt ans is %ld\n", ans);
	if (!n)
		return (1);
	while (ans > 0)
	{
		ans /= 10;
		++cntr;
	}
	printf("num_cnt cntr is %zu\n", cntr);
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
	while (num_cnt && cntr < num_cnt - 1)
	{
		divisor *= 10;
		++cntr;
	}
	return (divisor);
}

// Remember that num_cnt will be 1 more if sign < 0.
static	char	*ft_write_num(char *str, int n, int sign)
{
	long	tmp;
	size_t	cntr;
	int		divisor;
	int		ans;

	tmp = n;
	cntr = 0;
	divisor = ft_calc_divisor(n);
	printf("n passed in is %d\n", n);
	printf("divisor is %d\n", divisor);
	if (sign < 0)
	{
		tmp *= -1;
		str[0] = '-';
		++cntr;
	}
	printf("n is now %d\n", n);
	while (divisor > 0)
	{
		ans = tmp / divisor;
		printf("ans is %d\n", ans);
		str[cntr] = ans + 48;
		tmp = tmp - (ans * divisor);
		divisor /= 10;
		++cntr;
	}
	return (str);
}

// The problem might be that I did not step up the int's size to long.
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
	    printf("str is non-null\n");
	str = ft_write_num(str, n, sign);
	return (str);
}

int main(void)
{
	int x = 2;
	printf("%s\n", ft_itoa(-2147483647 - 1));
	//printf("%s\n", ft_itoa(63));
	//printf("atoi of -2147483647 - 1, returns %d\n", atoi(-2147483647 - 1));
	return (0);
}