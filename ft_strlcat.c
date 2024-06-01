/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 22:55:25 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/31 19:54:45 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < n)
	{
		i++;
	}
	while (src[j] && (i + j +1) < n)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < n)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

// int 	main()
// {
// 	char dest[] = "hello ";
// 	const char src[] = "world";
//	size_t result_len = ft_strlcat(dest, src, sizeof(dest));
// 	printf("Result is %s\n", dest);
//	printf("Resulting length is %zu\n", result_len);
//	return 0;
// }