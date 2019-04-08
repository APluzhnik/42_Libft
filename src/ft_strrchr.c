/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:52:00 by apluzhni          #+#    #+#             */
/*   Updated: 2018/11/08 15:20:29 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	*ret;

	i = 0;
	str = (char *)s;
	ret = NULL;
	while (str[i])
	{
		if (str[i] == (char)c)
			ret = &str[i];
		i++;
	}
	if (str[i] == (char)c)
		return (&str[i]);
	return (ret);
}
