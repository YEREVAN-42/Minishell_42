/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:05:01 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:05:03 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*new_dst;
	char	*new_src;

	if (!dst && !src)
		return (0);
	new_dst = (char *)dst;
	new_src = (char *)src;
	i = 0;
	if (new_dst > new_src)
		while (++i <= len)
			new_dst[len - i] = new_src[len - i];
	else
		while (len--)
			*new_dst++ = *new_src++;
	return (dst);
}
