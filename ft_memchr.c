/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:51:58 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/16 19:37:27 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
// searches for the first occurrence of the character "c" in the first "n" bytes of the string pointed by the argument "s"


{
	size_t	pos;

	pos = 0;
	while (pos < n)
	{
		if (*((unsigned char *)s + pos) == (unsigned char)c)
		{
			return ((void *)s + pos);
		}
		pos++;
	}
	return (0);
}
/* int main () 
{
   const char *s = "Hola que tal";
   int c = 'o';
   char *ret;

   ret = ft_memchr(s, c, 8);

   printf("Cadena despues de |%c| es - |%s|\n", c, ret);
   return(0);
} */