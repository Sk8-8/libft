/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:59:51 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/11 19:27:40 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s)[i] != c && i < n)
		i ++;
	if (((unsigned char *)s)[i] == c)
		return ((void *)s + i);
	else
		return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%p\n", ft_memchr("test", 's', 1));
	printf("%p\n", ft_memchr("test", 's', 3));
	printf("%p\n", ft_memchr("test", 'z', 1));
	return (0);
}*/
