/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:50:54 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:48:45 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n) 
//Copies "n" characters from memory area src to dst
{
	size_t	pos;

	if (!dst && !src)
		return (0);
	pos = 0;
	while (pos < n)
	{
		*(char *)(dst + pos) = *(char *)(src + pos); //Casting "dst" and "src" from void * to char *
		pos++;
	}
	return ((char *)dst);
}

/*  #include <stdio.h>
int main()
{
	char dst[50] = "Hola  buenos dias";
	char src[50] = "adios";
	printf("%s\n", ft_memcpy(dst, src, 3));
}  */