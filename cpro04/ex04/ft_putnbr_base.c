/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 20:01:18 by thwang            #+#    #+#             */
/*   Updated: 2022/06/07 19:26:27 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	error_check(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
		{
			return (0);
		}
		n = 1;
		while (str[i + n] != '\0')
		{
			if (str[i] == str[i + n])
				return (0);
			n++;
		}
		i++;
	}
	if (i <= 1)
	{
		return (0);
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	l_nbr;
	int			l;

	l_nbr = nbr;
	l = base_len(base);
	if (error_check(base) == 1)
	{
		if (l_nbr < 0)
		{
			write(1, "-", 1);
			l_nbr = -l_nbr;
		}
		if (l_nbr >= l)
		{
			ft_putnbr_base(l_nbr / l, base);
		}
		write(1, &base[l_nbr % l], 1);
	}
}
