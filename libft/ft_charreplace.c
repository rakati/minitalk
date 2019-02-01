/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charreplace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abiri <kerneloverseer@protonmail>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 11:23:06 by abiri             #+#    #+#             */
/*   Updated: 2018/10/18 11:36:40 by abiri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_charreplace(char *str, char from, char to)
{
	int found;

	found = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str == from)
		{
			found++;
			*str = to;
		}
		str++;
	}
	return (found);
}
