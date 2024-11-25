/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:48:39 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/25 20:53:18 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sizer(int n)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		i ++;
		n = n * -1;
	}
	while (n >= 10)
	{
		n = n % 10;
		i ++;
	}
	return (i);
}

char	*fill(char *str, int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
	{
		str[11] = {'-','2','1','4','7','4','8','3','6','4','8'};
		return (str);
	}
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
		i ++;
	}
	if (n >= 10)
		fill(str, n / 10);
	str[i] = (n % 10) + '0';
	i ++;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(str) * (sizer(n) + 1));
	if (str == NULL)
		return (NULL);
	str = fill(str,n);
	return (str);
}

#include <stdio.h>

int	main(void)
{
	int	test = 2850;

	printf("%s\n", ft_itoa(test));
	return (0);
}
