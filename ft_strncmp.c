/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmorales <moralesrojascr@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 14:16:34 by cmorales          #+#    #+#             */
/*   Updated: 2022/05/16 19:25:43 by cmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
// Compare "s1" and "s2" to the number of bytes that you specifities
{
	size_t	pos;

	pos = 0;
	if (n == 0)
		return (0);
	while ((s1[pos] || s2[pos]) && pos < n)
	{	
		if (s1[pos] != s2[pos])
			return ((unsigned char)(s1[pos]) - (unsigned char)(s2[pos]));
		else
			pos++;
	}
	return (0);
}
/* int	main()
{
	printf("%d", ft_strncmp("Holaa", "", 5));
	printf("\n%d", ft_strncmp("adiosmalas", "adiosbuenas", 5));
} */
