/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:36:08 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 18:41:41 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_char(char *str, char c, int len)
{
	int	i;
	
	i = 0;
	while (i < len)
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
	int i;
	int	arr[256]; 

	i = 0;
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (i < 256)
	{
		arr[i] = 0;
		i++;
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		if (arr[(int)argv[1][i]] == 0)
		{
			write(1, &argv[1][i], 1);
			arr[(int)argv[1][i]] = 1;
		}
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (arr[(int)argv[2][i]] == 0)
		{
			write(1, &argv[2][i], 1);
			arr[(int)argv[2][i]] = 1;
		}
		i++;
	}
	write(1, "\n",1);
	return (0);
}
