/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiri <abiri@1337.MA>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 20:33:02 by abiri             #+#    #+#             */
/*   Updated: 2018/10/10 20:45:47 by abiri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strjoin(const char *s1, const char *s2)
{
	char			*result;
	unsigned	int	length;
	unsigned	int	i;
	unsigned	int	j;

	j = 0;
	i = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	length = ft_strlen(s1) + ft_strlen(s2);
	result = NULL;
	if ((result = malloc(length + 1)))
	{
		while (j < ft_strlen(s1))
			result[j++] = s1[i++];
		i = 0;
		while (j < length)
			result[j++] = s2[i++];
		result[j] = '\0';
	}
	return (result);
}
