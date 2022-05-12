/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 11:51:21 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:48:57 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int pos) 
//Check if the character is alphabetic 
{
	if ((pos >= 'a' && pos <= 'z') || (pos >= 'A' && pos <= 'Z'))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main()	
{
	char	a = 'a';
	printf("%d", ft_isalpha(a));
}*/
