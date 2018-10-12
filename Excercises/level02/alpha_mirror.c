/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:22:19 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 18:32:05 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	char holder;

	i = 0;
	if (argc != 2)
	{
		return (0);
		write(1, "\n", 1);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			holder = 'z' - (argv[1][i] - 'a');
			write(1, &holder, 1);
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			holder = 'Z' - (argv[1][i] - 'A');
			write(1, &holder, 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
