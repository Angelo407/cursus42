/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprosper <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 12:57:41 by aprosper          #+#    #+#             */
/*   Updated: 2021/11/29 16:36:38 by aprosper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, 0, len);
}

/*
int	main(void)
{
	char	str[12] = "Hello World";
//	char	str[11] = "Hello World"; // POURQUOI FAIT CA  ?

	printf("avant : %s\n", str);
	ft_bzero(str, 5);
	printf("apres : %s\n", str);

	return (0);
}
*/