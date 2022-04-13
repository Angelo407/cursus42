/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 12:44:57 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 16:48:37 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!str || !f)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}

/*
int	main(void)
{
	char			*s = "salut";
	char			c = 'X';
	unsigned int	i = 0;
	
	ft_striteri(s, (*)f(i, c));

	return (0);
}
*/