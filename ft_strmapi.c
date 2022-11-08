/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:24:44 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:24:45 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	char	*dest;

	dest = ft_strdup(s);
	if (!dest)
	i = 0;
	while (s[i])
		d = (*f)(i++, s[i]);
	return (d);

}

int	main(int argc, char **argv)
{
	printf("%s", ft_strmapi(argv[1], ft_test(argv[1], argv[2])));
	return (0);
}
