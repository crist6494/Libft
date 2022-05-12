/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 19:55:23 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:49:04 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n) 
//Shall place(= put) "n" zero-valued bytes in the area pointed by "s"
{
	unsigned char	*tran;
	size_t			pos;

	tran = (unsigned char *)s;
	pos = 0;
	while (pos < n)
	{
		tran[pos] = 0;
		pos++;
	}
}
/* 
int	main()
{
	char c[50] = "HOLA";
	printf("%s",ft_bzero(c, 2));
	return (0);
} */
