/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:25:34 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:50:42 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, int n)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] && (i < n))
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (s1 + j);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	printf("vrai == %s\n", strstr(argv[1], argv[2]));
	printf("ft == %s\n", ft_strnstr(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
*/
