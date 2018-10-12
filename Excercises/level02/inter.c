/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 11:21:20 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 12:07:45 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		verify_char(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		else
			i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	(void)argc;
	while(argv[1][i] != '\0')
	{
		if (argv[1][i] == argv[2][j])
		{
			if (verify_char(argv[1], argv[2][j], i) == 1)
				{
					write(1, &argv[1][i], 1);
					j = 0;
					i++;
				}
			else 
				i++;
		}
		if (argv[2][j + 1] == '\0')
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (0);
}
