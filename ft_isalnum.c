/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kguillem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:30:01 by kguillem          #+#    #+#             */
/*   Updated: 2024/11/11 14:36:23 by kguillem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
/*
#include <unistd.h>
int	main(void)
{
	int	i;

	i = ft_isalnum('c');
	if (i == 1)
		write(1, "ouiouioui", 9);
	else
		write(1, "nuhuh", 9);
	return (0);
}*/
