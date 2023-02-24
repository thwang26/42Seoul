/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:39:31 by thwang            #+#    #+#             */
/*   Updated: 2022/06/08 16:59:26 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	long	prime;
	long	n;

	n = 2;
	prime = nb;
	if (prime <= 1)
		prime = 2;
	while (prime >= n * n)
	{
		if (prime % n == 0)
		{
			prime++;
			n = 1;
		}
		n++;
	}
	return (prime);
}
