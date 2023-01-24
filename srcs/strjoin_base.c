/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khovakim <khovakim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:18:15 by khovakim          #+#    #+#             */
/*   Updated: 2023/01/10 19:18:18 by khovakim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*strjoin_base(char const *s1, char const *s2, char c)
{
	char			*newstr;
	size_t			i;
	size_t			j;

	newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 2);
	if (!newstr)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	newstr[i] = c;
	j = 0;
	while (s2[j] != '\0')
	{
		newstr[i + 1 + j] = s2[j];
		j++;
	}
	newstr[i + j + 1] = '\0';
	return (newstr);
}
