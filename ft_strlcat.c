/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:43:54 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/16 17:37:19 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;

	i = 0;
	lendst = ft_strlen(dst);
	while (i < size && src[i] != '\0')
	{
		dst[i + lendst + 1] = src[i];
		i ++;
	}
	dst[i + lendst + 1] = '\0';
	return (ft_strlen(src) + lendst);
}
