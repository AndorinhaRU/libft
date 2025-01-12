/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:35:11 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:24:28 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int main() 
// {
//     char src[10] = "Hello";
//     char dest[10];
//     ft_memcpy(dest, src, 6);
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//     return 0;
// }