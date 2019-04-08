/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apluzhni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 19:16:25 by apluzhni          #+#    #+#             */
/*   Updated: 2018/11/06 16:26:35 by apluzhni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	size_t		sl1;
	size_t		sl2;

	str = NULL;
	if (!s1 || !s2)
		return (NULL);
	sl1 = ft_strlen(s1);
	sl2 = ft_strlen(s2);
	if (!(str = (char*)malloc(sl1 + sl2 + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
