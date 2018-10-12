/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 10:35:29 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 11:10:28 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int		ft_atoi(const char *str)
{
	int	i;
	int	start;
	int	res;
	int	neg;
	
	i = 0;
	start = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' ||
			   	str[i] == '\t' || str[i] == '\r'))
			i++;
	res = 0;
	neg = 0;
	while (str[i] != '\0' && ((str[i] == '+' || str[i] =='-')))
	{
		if (str[i] == '-')
			neg = 1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	if (neg)
		res *= -1;
	return (res);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("my atoi: %d\n", ft_atoi(argv[1]));
	printf("real atoi: %d\n", atoi(argv[1]));
	return (0);
}
