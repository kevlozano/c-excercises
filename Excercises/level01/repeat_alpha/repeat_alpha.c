/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:17:34 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/10 19:30:46 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int counter;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			counter = argv[1][i] - 96;
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			counter = argv[1][i] - 64;
		else
			counter = 1;
		while (counter > 0)
		{
			write(1, &argv[1][i], 1);
			counter--;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
