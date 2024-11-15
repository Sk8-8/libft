/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:48:39 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/15 21:30:42 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	poweroften(int n)
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
		str{-;2;1}
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
		i ++;
	}

}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(str) * (poweroften(n) + 1));
	if (str == NULL)
		return (NULL);
	return (fill(str, n));
}
