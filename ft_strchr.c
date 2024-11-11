/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:54:20 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/11 15:28:39 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i ++;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%p", ft_strchr("test", 's'));
	return (0);
}*/
