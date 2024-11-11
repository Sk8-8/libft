/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:28:09 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/11 19:02:22 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	res;

	if (n ==0)
		return (0);
	res = ((unsigned char) s1[n]) - ((unsigned char) s2[n]);
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_memcmp("fail", "goal", 0));
	printf("%d\n", ft_memcmp("fail", "goal", 1));
	printf("%d\n", ft_memcmp("fail", "goal", 2));
	printf("%d\n", ft_memcmp("fail", "goal", 3));
	printf("%d\n", ft_memcmp("fail", "goal", 4));
	return (0);
}
