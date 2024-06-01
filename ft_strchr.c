/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:02 by astolbov          #+#    #+#             */
/*   Updated: 2024/06/01 10:43:39 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	while (*str != '\0')
	{
		if (*str == (char)i)
			return ((char *)str);
		str++;
	}
	if ((char)i == '\0')
		return ((char *)str);
	return (NULL);
}

// int main(void)
// {
//     const char *str = "Hello, World!";
//     int ch = 'W';
//     char *result = ft_strchr(str, ch);
//     if (result != NULL)
//     {
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     }
//     else
//     {
//         printf("Character '%c' not found.\n", ch);
//     }
//     return 0;
// }
