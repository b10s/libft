/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:57:35 by aenshin           #+#    #+#             */
/*   Updated: 2023/07/08 21:03:25 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void *
	ft_calloc(size_t count, size_t size) {
	void	*res;
	void	*tmp;
	size_t	i;

	i = 0;
	if (count != 0 && (SIZE_MAX / count) < size)
		return (NULL);
	res = malloc(count * size);
	if (res == NULL)
		return (res);
	tmp = res;
	while (i++ < count * size)
		*(char *)tmp++ = '\0';
	return (res);
}
