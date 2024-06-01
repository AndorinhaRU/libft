/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:50:23 by astolbov          #+#    #+#             */
/*   Updated: 2024/06/01 10:48:48 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*tmp;

	tmp = (char *)str;
	len = ft_strlen(str);
	if (c == '\0')
		return (tmp + len);
	while (len >= 0)
	{
		if (tmp[len] == (char)c)
			return (tmp + len);
		len--;
	}
	return (0);
}

// int main(void)
// {
//     const char *str = "Hello, World!";
//     int ch = 'o';
//     char *result = ft_strrchr(str, ch);
//     if (result != NULL)
//         printf("Last occur of '%c' found at pos: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found.\n", ch);
//     return 0;
// }