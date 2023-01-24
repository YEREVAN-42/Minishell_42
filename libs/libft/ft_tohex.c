/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tohex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:07:44 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:07:47 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tohex(int n)
{
	char	*hex;
	int		temp;
	int		i;

	i = 0;
	hex = ft_calloc(sizeof(char), 100);
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
			temp += 48;
		else
			temp += 55;
		hex[i++] = temp;
		n /= 16;
	}
	hex[i] = '\0';
	return (hex);
}
