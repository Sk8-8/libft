/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:31:13 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/27 14:27:50 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	starttrim(char const *s1, char const *set)
{
	size_t	iset;
	size_t	is1;

	iset = 0;
	is1 = 0;
	while (set[iset] != '\0')
	{
		if (s1[is1] == set[iset])
		{
			is1 ++;
			iset = 0;
		}
		else
			iset ++;
	}
	return (is1);
}

size_t	endtrim(char const *s1, char const *set)
{
	size_t	iset;
	size_t	is1;

	iset = 0;
	is1 = ft_strlen(s1) - 1;
	while (set[iset] != '\0')
	{
		if (s1[is1] == set[iset])
		{
			is1 --;
			iset = 0;
		}
		else
			iset ++;
	}
	return (is1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	end = endtrim(s1, set);
	start = starttrim(s1, set);
	trimed = malloc(sizeof(*trimed) * (ft_strlen(s1) + 1 - (start + end)));
	if (trimed == NULL)
		return (NULL);
	while (i + start <= end)
	{
		trimed[i] = s1[start + i];
		i ++;
	}
	trimed[i] = '\0';
	return (trimed);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("orem \n ipsum \t dolor \n sit \t amet", " "));
	printf("%p\n", ft_strtrim("teaaaaaaaaast", "ts"));
	return (0);
}*/
