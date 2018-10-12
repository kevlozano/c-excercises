/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:32:48 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 18:45:16 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main(void)
{
	int tab[12];
	int i;

	i = 0;
	while (i <= 10)
	{
		tab[i] = i;
		i++;
	}
	printf("%d\n", max(tab, 11));
	return (0);

}
