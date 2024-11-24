/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:02:07 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/24 17:51:46 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

size_t	count(char const *s, char c)
{
	size_t	inword;
	size_t	ccount;

	inword = 0;
	ccount = 0;
	while (*s != '\0')
	{
		if (*s == c)
			inword = 0;
		else
		{
			if (inword == 0)
				ccount ++;
			inword = 1;
		}
		s ++;
	}
	return (ccount);
}

size_t	cutter(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i ++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	tab = malloc(sizeof(*tab) * (count(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[j])
	{
		size = cutter(s + j, c);
		if (size  != 0)
		{
			tab[i] = malloc(sizeof(char) * size + 1);
			ft_memcpy(tab[i], s + j, size);
			tab[i][size] = '\0';
			++i;
		}
		j = j + size + 1;
		if (s[j - 1] == '\0')
			break;
	}
	tab[i] = NULL;
	return (tab);
}
/*
#include <stdio.h>

int	main(int argc,char **argv)
{
	int i;
	char	**tab;

	i = 0;
	tab = ft_split(argv[1], ',');
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		free(tab[i]);
		i ++;
	}
	free(tab);
	return (0);
}*/
