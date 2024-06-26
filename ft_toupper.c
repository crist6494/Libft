/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:53:25 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/16 19:05:42 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int pos)
// Converts a lowercase alphabet in a uppercase alphabet
{
	if (pos >= 'a' && pos <= 'z')
		return (pos - 32);
	return (pos);
}
/*#include <stdio.h>
int	main()
{
	char	a = 'a';
	printf("%c", ft_toupper(a));
}*/
