

#include <stdio.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t cntr_s1;
	size_t cntr_s2;

	cntr_s1 = 0;
	cntr_s2 = 0;
	while (s1[cntr_s1] == s2[cntr_s2] && s1[cntr_s1] && s1[cntr_s2] &&
		cntr_s1 < n)
	{
		++cntr_s1;
		++cntr_s2;
	}
	return (s1[cntr_s1] - s2[cntr_s2]);
}

int main(void)
{
	char ar1[] = "Hello There!";
	char ar2[] = "Hello Therg!";
	printf("The string diff is %d\n", strncmp(ar1, ar2,-1));
	printf("The string diff is %d\n", ft_strncmp(ar1, ar2,-1));
	printf("The sizeof of size_t is %lu\n", sizeof(size_t));
	return (0);
}