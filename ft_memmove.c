/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 17:47:28 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:20:07 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	len;

	len = 0;
	if (src < dest)
	{
		len = n;
		while (len > 0)
		{
			len--;
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		len = 0;
		while (len < n)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len++;
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str1[20] = "hello, world!";
// 	char	str2[20] = "goodbye, world!";

// 	printf("Before memmove:\n");
// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);

// 	ft_memmove(str1 + 7, str1, 7);

// 	printf("\nAfter memmove:\n");
// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);

// 	return (0);
// }