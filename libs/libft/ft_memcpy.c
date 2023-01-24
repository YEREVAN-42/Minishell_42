/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:04:50 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:04:53 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*new_dst;
	char	*new_src;

	if (!dst && !src)
		return (0);
	new_dst = (char *)dst;
	new_src = (char *)src;
	while (n--)
		*new_dst++ = *new_src++;
	return (dst);
}
