/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcadinot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:02:37 by lcadinot          #+#    #+#             */
/*   Updated: 2022/11/08 21:42:44 by lcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int nbr)
{
	return (nbr >= 0 && nbr <= 127);
}
