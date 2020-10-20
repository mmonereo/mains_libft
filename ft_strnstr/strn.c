/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strn.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmonereo <mmonereo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 16:24:13 by mmonereo          #+#    #+#             */
/*   Updated: 2020/10/20 16:25:29 by mmonereo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		l;

	l = (int)len;
	i = 0;
	j = 0;
	if (*needle == 0)
	{
		return ((char *)haystack);
	}
	while (l != 0 && haystack[i])
	{
		j = 0;
		while (haystack[i++] == needle[j++])
		{
			l--;
			if (l >= 0 && needle[j] == 0)
			{
				return ((char *)&haystack[i - j]);
			}
		}
		l--;
	}
	return (NULL);
}
