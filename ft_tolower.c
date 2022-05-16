/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:53:44 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/16 19:06:09 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int pos)
// Converts a uppercase alphabet in a lowercase alphabet
{
	if (pos >= 'A' && pos <= 'Z')
		return (pos + 32);
	return (pos);
}
/*#include <stdio.h>
int	main()
{
	char	a = 'G';
	printf("%c", ft_tolower(a));
}*/
