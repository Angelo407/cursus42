/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:54:31 by aprosper          #+#    #+#             */
/*   Updated: 2022/01/08 17:55:15 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	ft_itoa_char(int nbr)
{
	char	c;

	if (nbr == 0)
		c = '0';
	while (nbr > 0 && nbr <= 9)
	{
		c = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (c);
}
