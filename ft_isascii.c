/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:26:05 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:05:19 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (!(i >= 0 && i <= 127))
		return (0);
	return (1);
}

// int main()
// {
//     int c = 65; // Symbol 'A'

//     if (ft_isascii(c))
//         printf("%d is an ASCII character.\n", c);
//     else
//         printf("%d is not an ASCII character.\n", c);

//     return (0);
// }