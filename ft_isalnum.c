/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:16:25 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:48:48 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int nbr)
{
	return ((nbr >= 48 && nbr <= 57) || (nbr >= 97 && nbr <= 122)
		|| (nbr >= 65 && nbr <= 90));
}
