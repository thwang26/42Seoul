/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 19:26:21 by thwang            #+#    #+#             */
/*   Updated: 2022/06/08 20:02:32 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_ten_queens_puzzle(void);
void	make_ten_queens(int *cnt, int *y, int x);
int		queen_check(int x, int *y);
int		ft_abs(int a, int b);
void	print_board(int *y);

int main() {
	int cnt = ft_ten_queens_puzzle();
	printf("%d", cnt);
}

int	ft_ten_queens_puzzle(void)
{
	int	x;
	int	y[10];
	int	cnt;

	cnt = 0;
	x = 0;
	while (x < 10)
	{
		y[x] = -1;
		x++;
	}
	make_ten_queens(&cnt, y, 0);
	return (cnt);
}

void	make_ten_queens(int *cnt, int *y, int x)
{
	int	n;

	if (x == 10)
	{
		print_board(y);
		*cnt = *cnt + 1;
		return ;
	}
	n = 0;
	while (n < 10)
	{
		y[x] = n;
		if (queen_check(x, y))
			make_ten_queens(cnt, y, x +1);
		n++;
	}
}

int	queen_check(int x, int *y)
{
	int	n;

	n = 1;
	while (x - n != -1)
	{
		if (ft_abs(x, x - n) == ft_abs(y[x], y[x - n]) || y[x] == y[x - n])
			return (0);
		n++;
	}
	return (1);
}

int	ft_abs(int a, int b)
{
	if (a - b > 0)
		return (a - b);
	else
		return (b - a);
}

void	print_board(int *y)
{
	char	a;
	int		i;

	i = 0;
	while (i < 10)
	{
		a = y[i] + '0';
		write(1, &a, 1);
		i++;
	}
	write(1, "\n", 1);
}
