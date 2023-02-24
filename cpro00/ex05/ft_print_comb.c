/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:40:48 by thwang            #+#    #+#             */
/*   Updated: 2022/06/01 18:07:26 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_3_num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_comb(void)
{
	char	q;
	char	w;
	char	r;

	q = '0';
	while (q <= '7')
	{
		w = q + 1;
		while (w <= '8')
		{
			r = w + 1;
			while (r <= '9')
			{
				ft_3_num(q, w, r);
				r++;
			}
			w++;
		}
		q++;
	}
}
