/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouhaddo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 22:41:08 by nouhaddo          #+#    #+#             */
/*   Updated: 2019/02/01 18:09:11 by nouhaddo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minitalk.h"

static t_msg msg;

void	get_bit_by_bit(int bit)
{
	if (bit == 31)
		msg.c = ((1 << (msg.size)) | msg.c);
	msg.size++;
	if (msg.size == 8)
	{
		printf("%c", msg.c);
		msg.c = 0;
		msg.size = 0;
	}
	usleep(30);
}

void	printmsg(int signal)
{
	printf("code : %d\n", signal);
}

int main()
{
	if (!msg.c)
	{
		msg.c = 0;
		msg.size = 0;
	}
	printf("server pid : %d\n", getpid());
	/*
	signal(SIGUSR1, get_bit_by_bit);
	signal(SIGUSR2, get_bit_by_bit);
	*/
	signal(SIGUSR2, printmsg);
	while (1);
}
