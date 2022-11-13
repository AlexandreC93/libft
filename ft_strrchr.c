/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:26:08 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:26:10 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *str, int c)
{
	int	l;

	l = ft_strlen(str);
	while (l > 0)
	{
		if (str[l] == c)
			return (str + l);
		l--;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	printf("%s", ft_strrchr(argv[1], 99));
	return (0);
}
*/
