/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:55:26 by astolbov          #+#    #+#             */
/*   Updated: 2024/05/30 19:19:29 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big_str, const char *small_str, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (small_str == NULL || small_str[0] == '\0')
		return ((char *)big_str);
	while (big_str[i] != '\0' && i < n)
	{
		if (big_str[i] == small_str[j])
		{
			while (big_str[i + j] == small_str[j] && i + j < n)
			{
				if (small_str[j + 1] == '\0')
					return ((char *)big_str + i);
				j++;
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
