/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:15:42 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:25:42 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int src, size_t n)
{
	char	*c;

	c = (char *)b;
	while (n > 0)
	{
		c[n - 1] = src;
		n--;
	}
	return (b);
}

// int main()
// {
//     char str[50] = "Hello, World!"; 
//     printf("Before memset: %s\n", str);
//     ft_memset(str, '*', 5);
//     printf("After memset: %s\n", str);
//     return (0);
// }