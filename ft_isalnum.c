/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:44:06 by astolbov          #+#    #+#             */
/*   Updated: 2024/06/01 11:51:32 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	while (ft_isalpha(i) || ft_isdigit(i))
		return (1);
	return (0);
}

// int main()
// {
//     char c = '5';

//     if (ft_isalnum(c))
//         printf("%c is alphanumeric.\n", c);
//     else
//         printf("%c is not alphanumeric.\n", c);

//     return (0);
// }
