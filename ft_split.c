/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:02:07 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/16 15:17:01 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j ++;
		i ++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**tab;

	i = 0;
	k = 0;
	tab = malloc(sizeof(*tab) * (count(s, c) + 2));
	if (tab == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tab[k] = malloc(sizeof(**tab) * (i + 1 - j));
			if (tab[k] == NULL)
				return (NULL);
			j = i;
			k ++;
		}
		i ++;
	}
	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			tab[k][i] = '\0';
			k ++;
			i ++;
			j = i;
		}
		tab[k][i - j] = s[i];
		i ++;
	}
	tab[k][i] = '\0';
	tab[k + 1] = NULL;
}
