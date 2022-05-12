/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:16:32 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:48:52 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len) 
//Copies the character "c" to the first "n" characters
{
	size_t	pos;

	pos = 0;
	while (pos < len)
	{
		((char *)b)[pos] = (unsigned char)c; //Casting from void * to a char *
		pos++;
	}
	return (b);
}

/* int	main()
{
	char c[50] = "HOLA";
	printf("%s", ft_memset(c, 'a', 2));
	return (0);
}  */