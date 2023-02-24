/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjungoo <kjungoo@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:45:06 by kjungoo           #+#    #+#             */
/*   Updated: 2022/05/21 15:33:46 by kjungoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line1(int x)
{
	ft_putchar('A');
	if (x >= 2)
	{
		while (x > 2)
		{
			ft_putchar('B');
			x--;
		}
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	b_from_line2(int x, int y)
{
	int	i;

	while (y > 2)
	{
		ft_putchar('B');
		if (x >= 2)
		{	
			i = x;
			while (i > 2)
			{
				ft_putchar(' ');
				i--;
			}
			ft_putchar('B');
		}
		ft_putchar('\n');
		y--;
	}
}

void	ft_line_x( int x, int y)
{
	if (y != 1)
	{
		ft_putchar('A');
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar('B');
				x--;
			}
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	rush( int x, int y )
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_line1 (x);
	b_from_line2 (x, y);
	ft_line_x (x, y);
}
