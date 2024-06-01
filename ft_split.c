/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astolbov <astolbov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:50:42 by astolbov          #+#    #+#             */
/*   Updated: 2024/06/01 11:49:09 by astolbov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *str, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			count++;
			i++;
		}
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(char const *str, char c, int start)
{
	int		i;
	int		count;

	i = start;
	count = 0;
	while (str[i] && str[i] != c)
	{
		count++;
		i++;
	}
	return (count);
}

static char	*ft_getword(char const *str, char c, int start)
{
	char	*word;
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	len = ft_wordlen(str, c, start);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (str[i] != c && str[i] != '\0')
		word[j++] = str[i++];
	word[j] = '\0';
	return (word);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = -1;
	if (!str)
		return (NULL);
	arr = (char **)malloc((sizeof(char *) * (ft_wordcount(str, c) + 1)));
	if (!arr)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			arr[++j] = ft_getword(str, c, i++);
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	arr[++j] = NULL;
	return (arr);
}
