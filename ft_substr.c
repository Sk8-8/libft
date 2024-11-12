/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:56:32 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/12 17:58:30 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = malloc((sizeof(char)) * (len + 1));
	if (sub == NULL)
		return (NULL);
	while (i <= len)
	{
		sub[i] = s[start + i];
		i ++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>

int	main(void)
{
	char const	*test;

	test = "test";
	printf("%p\n", test);
	printf("%p\n", ft_substr(test, 1, 2));
	printf("%s\n", ft_substr(test, 1, 2));
	return(0);
}*/
