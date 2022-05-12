/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:42:57 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/12 17:56:24 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
//Copies and concatenate from "src" to "dest" but not finish whith '\0'
{
	size_t	pos;

	pos = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[pos] != '\0' && pos < size -1)
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (ft_strlen(src));
}
/*#include <stdio.h>
int main(){
	char src[] = "Hola";
	char dest[] = "adios ";
	printf("%zu| %s\n", ft_strlcpy(dest, src, 4), dest);
	printf("%zu| %s", strlcpy(dest, src, 5), dest);
*/
