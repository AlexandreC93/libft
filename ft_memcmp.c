/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:17:38 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:31:45 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(int argc, char **argv)
{
	ft_memcmp()
	return (0);
}
*/
