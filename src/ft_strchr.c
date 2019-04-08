/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 15:59:25 by apluzhni          #+#    #+#             */
/*   Updated: 2018/11/02 16:30:24 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = -1;
	str = (char *)s;
	while (str[++i])
	{
		if (str[i] == (char)c)
			return (str + i);
	}
	if (str[i] == (char)c)
		return (str + i);
	return (NULL);
}
