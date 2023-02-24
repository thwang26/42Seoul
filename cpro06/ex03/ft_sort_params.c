/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:46:35 by thwang            #+#    #+#             */
/*   Updated: 2022/06/09 16:12:06 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	j;

	j = 0;
	while (s1[j] == s2[j] && (s1[j] != '\0') && (s2[j] != '\0'))
		j++;
	return (s1[j] - s2[j]);
}

void	ft_swap(int argc, char **argv)
{
	int		size;
	int		i;
	char	*tmp;

	size = argc - 1;
	while (size > 1)
	{
		i = 1;
		while (i < size)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	ft_swap(argc, argv);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
