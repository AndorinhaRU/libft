/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:52:53 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 18:05:11 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if (!((i >= 'A' && i <= 'Z')
			|| (i >= 'a' && i <= 'z')))
		return (0);
	return (1);
}

// int	main(void)
// {
// 	printf("%i\n", ft_str_is_alpha("aa"));
// 	printf("%i\n", ft_str_is_alpha("a434"));
// 	printf("%i\n", ft_str_is_alpha("434"));
// 	return 0;
// }