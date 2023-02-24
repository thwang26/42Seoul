/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:24:05 by thwang            #+#    #+#             */
/*   Updated: 2022/06/04 14:23:54 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = size -1;
	while ((size / 2) > a)
	{
		tmp = tab[a];
		tab[a] = tab[b];
		tab[b] = tmp;
		a++;
		b--;
	}
}
