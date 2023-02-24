/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:00:42 by thwang            #+#    #+#             */
/*   Updated: 2022/06/08 21:55:41 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char num[n];

	int i;
	
	i = 0;
	num[i] = 0;
	while (num[i] != '\0')
	{
		num[i + 1] = num[i] + 1;
		i++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
