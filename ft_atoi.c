/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:59:38 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/11 15:59:30 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	if (nptr[0] == '-')
	{
		sign = -1;
		i ++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{

}
