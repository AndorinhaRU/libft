/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:38:31 by astolbov          #+#    #+#             */
/*   Updated: 2024/06/01 10:25:40 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	if (!(i >= '0' && i <= '9'))
		return (0);
	return (1);
}

// int main()
// {
//     char c = '5';

//     if (ft_isdigit(c))
//         printf("%c is a digit.\n", c);
//     else
//         printf("%c is not a digit.\n", c);

//     return 0;
// }