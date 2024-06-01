/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:28:50 by astolbov          #+#    #+#             */
/*   Updated: 2024/06/01 10:30:58 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
		return (i - 32);
	return (i);
}

// int main(void)
// {
//     int c = 'a'; // Пример символа в нижнем регистре
//     printf("Before: %c\n", c);
//     printf("After: %c\n", ft_toupper(c));
//     return 0;
// }