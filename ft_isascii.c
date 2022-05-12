/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:00:56 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:49:09 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int pos)
 //Check if the character is in the ASCII table
{
	if (pos >= 0 && pos <= 127)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	 main()
{
	char	c = '~';
	char	b = 'ñ';
	printf ("%d", ft_isascii(c));
	printf ("\n");
	printf ("%d", ft_isascii(b));
}*/
