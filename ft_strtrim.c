/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:31:13 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/14 22:09:29 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

size_t	starttrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i] != '\0')
	{
		if (s1[j] == set[i])
		{
			j ++;
			i = 0;
		}
		else
			i ++;
	}
	return (j);
}

size_t	endtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (set[i] != '\0')
	{
		if (s1[j] == set[i])
		{
			j --;
			i = 0;
		}
		else
			i ++;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimedstr;
	size_t	start;
	size_t	end;
	size_t	i;

	i = 0;
	end = endtrim(s1, set);
	start = starttrim(s1, set);
	trimedstr = malloc(sizeof(trimedstr) * (ft_strlen(s1) + 1 - (start + end)));
	if (trimedstr == NULL)
		return (NULL);
	while (i <= end)
	{
		trimedstr[i] = s1[start + i];
		i ++;
	}
	trimedstr[i] = '\0';
	return (trimedstr);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strtrim("test", "ts"));
	printf("%p\n", ft_strtrim("test", "ts"));
	return (0);
}*/
