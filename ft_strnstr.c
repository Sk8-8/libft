/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:53:32 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/27 20:29:14 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j])
		{
			j ++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i ++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strnstr("aaab", "aab", 4));
	//printf("%p\n", ft_strnstr("testing", "ting", 7));
	//printf("%p\n", ft_strnstr("testing", "", 3));
	return (0);
}*/
