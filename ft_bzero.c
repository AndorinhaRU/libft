/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:15:50 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:20:46 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *z, size_t n)
{
	ft_memset(z, 0, n);
}

// int main()
// {
//     char str[10] = "Hello";
//     printf("Before bzero: %s\n", str);
//     ft_bzero(str, 5);
//     printf("After bzero: %s\n", str);
//     return (0);
// }