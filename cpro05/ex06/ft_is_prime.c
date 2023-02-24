/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:42:43 by thwang            #+#    #+#             */
/*   Updated: 2022/06/08 17:09:28 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	n;

	n = 2;
	if (nb <= 1)
		return (0);
	while (nb >= n * n)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}