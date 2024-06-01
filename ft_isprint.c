/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 21:30:58 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:22:24 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int i)
{
	if (!(i > 31 && i < 127))
		return (0);
	return (1);
}

// int main()
// {
//     char c = 'A';

//     if (ft_isprint(c))
//         printf("%c is a printable character.\n", c);
//     else
//         printf("%c is not a printable character.\n", c);

//     return (0);
// }