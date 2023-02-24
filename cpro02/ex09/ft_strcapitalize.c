/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thwang <thwang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 19:50:55 by thwang            #+#    #+#             */
/*   Updated: 2022/06/02 20:10:37 by thwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	j;
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	j = 1;
	while (str[j])
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
			str[j] += 32;
		j++;
	}
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!((str[i - 1] >= '0' && str[i - 1] <= '9') || \
			(str[i - 1] >= 'A' && str[i - 1] <= 'Z') || \
			(str[i - 1] >= 'a' && str[i - 1] <= 'z')))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
