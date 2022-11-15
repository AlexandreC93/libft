/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:25:14 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/13 16:17:44 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char **argv)
{
	printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	return (0);
}
*/
