/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:26:56 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/15 13:33:59 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"

static char	*ft_strndup(char const *src, int n)
{
	int		i;
	char	*dest;

	i = 0;
	dest = ft_calloc((n + 1), sizeof(char));
	if (!dest)
		return (NULL);
	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	dest = 0;
	while (s[i])
	{
		if (i == start)
			dest = ft_strndup(s + i, len);
		i++;
	}
	return (dest);
}

int	main(int argc, char **argv)
{
	printf("%s", ft_substr("salut", 3, 2));
	return (0);
}
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
