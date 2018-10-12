/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:45:27 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 19:01:46 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int	i;
	int len;
	int j;
	int count;
	char *str = argv[1];
	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	j = 0;
	len = 0;
	count = 0;
	while (str[len] != '\0')
		len++;
	while (str[i] != '\0')
	{
		while (argv[2][j] != '\0')
		{
			if (str[i] == argv[2][j])
			{
				count++;
				i++;
				j++;
		
			}
			else
				j++;
		}
		i++;
	}
	if (count == len)
	{
		i = 0;
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
