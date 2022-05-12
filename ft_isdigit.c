/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:56:35 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:49:11 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int pos) 
//Check if the character is a digit
{
	if (pos >= '0' && pos <= '9')
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
int	 main()
{
	char	c = 'a';
	char	b = '1';
	printf ("%d", ft_isdigit(c));
	printf ("\n");
	printf ("%d", ft_isdigit(b));
} */