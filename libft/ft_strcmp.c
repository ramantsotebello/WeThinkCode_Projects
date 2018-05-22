

#include <stdio.h>
#include "libft.h"

// This will need to subtract s2 from s1, i.e. s1 - s2. What strcmp does is de-
// tect the first differing character, then returning the difference of ASCII
// value.
int ft_strcmp(const char *s1, const char *s2)
{
	int cntr_s1;
	int cntr_s2;

	cntr_s1 = 0;
	cntr_s2 = 0;
	while (s1[cntr_s1] == s2[cntr_s2] && s1[cntr_s1] && s1[cntr_s2])
	{
		++cntr_s1;
		++cntr_s2;
	}
	return (s1[cntr_s1] - s2[cntr_s2]);
}

int main(void)
{
	char ar1[] = "Hello There!";
	char ar2[] = "Hello Therf!";
	printf("The string diff is %d\n", strcmp(ar1, ar2));
	printf("The string diff is %d\n", ft_strcmp(ar1, ar2));
	return (0);
}