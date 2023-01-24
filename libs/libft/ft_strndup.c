/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:06:43 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:06:45 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*new_s1;
	unsigned int	i;

	i = -1;
	new_s1 = (char *)malloc(sizeof(char) * (n + 1));
	if (new_s1 == NULL)
		return (NULL);
	while (++i < n && s1[i] != '\0')
		new_s1[i] = s1[i];
	new_s1[i] = '\0';
	return (new_s1);
}
