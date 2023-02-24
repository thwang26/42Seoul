/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:15:34 by thwang            #+#    #+#             */
/*   Updated: 2022/06/02 16:49:21 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int					i;
	unsigned char		*str2;

	str2 = (unsigned char *) str;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str2[i] / 16], 1);
			write(1, &"0123456789abcdef"[str2[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
