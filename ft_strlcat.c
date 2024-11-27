/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:43:54 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/27 15:57:25 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;

	i = 0;
	lendst = ft_strlen(dst);
	while (i + lendst + 1 < size && src[i] != '\0')
	{
		dst[i + lendst] = src[i];
		i ++;
	}
	dst[i + lendst + 1] = '\0';
	return (lendst + ft_strlen(src));
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*src = "ing";
	char	dst[100] = "test";

	strlcat(dst, src, 10);
	printf("%s\n", dst);
	return (0);
}*/
