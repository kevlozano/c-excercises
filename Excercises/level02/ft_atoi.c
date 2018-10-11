/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 10:35:29 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 10:52:17 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	i;
	int	start;
	int	res;
	int	neg;

	start = 0;
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\n' ||
			   	str[i] == '\t' || str[i] == '\r'))
			start++;
	i = start;
	res = 0;
	neg = 0;
	while (str[i] != '\0' && (i == start && (str[i] == '+' || str[i] =='-')))
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
