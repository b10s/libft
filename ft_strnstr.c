/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:42:05 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/06 23:10:30 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char *
	ft_strnstr(const char *haystack, const char *needle, size_t len) {
	size_t		i;
	size_t		j;
	const char	*res;
	const char	*tmp;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 1;
	while (i <= len && *haystack != '\0')
	{
		tmp = needle;
		res = haystack;
		j = 0;
		while (*res == *tmp && *tmp != '\0' && i + j <= len)
		{
			j++;
			res++;
			tmp++;
		}
		if (*tmp == '\0')
			return ((char *)haystack);
		i++;
		haystack++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aabc";
// 	printf("%s\n", ft_strnstr(haystack, needle, -1));	// segfault and KO
// 	printf("%s\n", ft_strnstr(haystack, "abcd", 9));	// KO
// }