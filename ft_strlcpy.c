/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:32:00 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:30:02 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (n == 0)
		return (src_len);
	while (src[i] != '\0' && i < (n - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
		dest[i] = '\0';
	return (src_len);
}

// int main() 
// {
//     char dest[20];
//     const char *src = "Hello, World!";
//     size_t len;
//     len = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Copied string: %s\n", dest);
//     printf("Length of source: %zu\n", len);
//     return 0;
// }