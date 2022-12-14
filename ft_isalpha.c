/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:16:12 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:49:33 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int nbr)
{
	return ((nbr >= 65 && nbr <= 90) || (nbr >= 97 && nbr <= 122));
}
