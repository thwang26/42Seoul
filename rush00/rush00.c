/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjungoo <kjungoo@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:47:31 by kjungoo           #+#    #+#             */
/*   Updated: 2022/05/21 15:38:12 by kjungoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_line1(int x)
{	
	ft_putchar('o');
	if (x >= 2)
	{
		while (x > 2)
		{
			ft_putchar('-');
			x--;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	pipes_from_line2(int x, int y)
{
	int		i;

	while (y > 2)
	{	
		ft_putchar('|');
		if (x >= 2)
		{
			i = x;
			while (i > 2)
			{
				ft_putchar(' ');
				i--;
			}
			ft_putchar('|');
		}
		ft_putchar('\n');
		y--;
	}
}

void	ft_line_x(int x, int y)
{
	if (y != 1)
	{	
		ft_putchar('o');
		if (x >= 2)
		{
			while (x > 2)
			{
				ft_putchar('-');
				x--;
			}
			ft_putchar('o');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	ft_line1(x);
	pipes_from_line2(x, y);
	ft_line_x(x, y);
}
