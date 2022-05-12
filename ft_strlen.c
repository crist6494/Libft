/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:10:59 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:49:21 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*str) 
//Take a string as an argument and returns its length
{
	int	pos;	

	pos = 0;
	while (str[pos] != '\0')
	{
		pos++;
	}
	return (pos);
}
/*#include <stdio.h>
int main()
{
	char	*c = "Hola";
	printf("%d", ft_strlen(c));
	return(0);
}*/
