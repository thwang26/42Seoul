/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 16:41:34 by thwang            #+#    #+#             */
/*   Updated: 2022/06/08 17:03:07 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power != 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (power != 0)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
