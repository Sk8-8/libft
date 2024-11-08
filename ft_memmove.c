/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:35:31 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/08 16:40:38 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src <= dest && src + n >= dest)
	{		
		while (i != n)
		{
			((unsigned char *)dest)[n - i] = ((unsigned char *)src)[n - i];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "test";
	char	str2[] = "goal";

	ft_memmove(str1, str2, 4);
	printf("%p\n", str1);
	printf("%s\n", str1);
	printf("%p\n", str2);
	printf("%s\n", str2);
	return (0);
}*/
