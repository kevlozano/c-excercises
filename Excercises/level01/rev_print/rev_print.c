/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 21:02:53 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/10 21:06:53 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	while (argv[1][i] != '\0')
		i++;
	while (--i >= 0)
	{
		write(1, &argv[1][i], 1);
	}
	write(1, "\n", 1);
	return (0);
}
