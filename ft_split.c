/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:02:07 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/22 19:11:53 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	count(char const *s, char c)
{
	size_t	i;
	size_t	ccount;

	i = 0;
	ccount = 0;
	while (i != '\0')
	{
		if (s[i] == c)
			ccount ++;
		i ++;
	}
	return (ccount);
}

size_t	cutter(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' || s[i] != c)
		i ++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	tab = malloc(sizeof(*tab) * (count(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[k] != '\0')
	{
		tab[j] = malloc(sizeof(**tab) * (cutter(s + k, c)));
		if (tab[j] == NULL)
			return (NULL);
		k = cutter(s + k, c);
		j ++;
	}
}

#include <stdio.h>

int	main(void)
{
	printf("
