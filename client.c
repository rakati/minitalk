/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 22:52:12 by nouhaddo          #+#    #+#             */
/*   Updated: 2019/02/01 18:28:08 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
#include <string.h>

void	send_bit_by_bit(int pid, char *msg)
{
	int shift;

	while (*msg)
	{
		shift = 0;
		while (shift < 8)
		{
			if ((((*msg) >> shift) & 1) == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			shift++;
			sleep(0);
		}
		msg++;
	}
}

int main(int ac, char **av)
{
	int pid;

	if (ac == 3)
	{
		pid = atoi(av[1]);
		kill(pid, SIGUSR2);
		//send_bit_by_bit(pid, av[2]);
	}
	else
		printf("usage: client server_pid msg_to_send\n");
	return (0);
}
