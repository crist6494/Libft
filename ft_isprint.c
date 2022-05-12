/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:31:16 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:48:59 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int pos) 
//Check if the character is printable
{
	if (pos >= 32 && pos <= 126)
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	 main()
{
	char	c = '~';
	char	b = ' ';
	printf ("%d", ft_isprint(c));
	printf ("\n");
	printf ("%d", ft_isprint(b));
}*/
