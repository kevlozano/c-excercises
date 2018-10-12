/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 14:11:37 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 14:14:25 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	char c;

	c = 'o';
	write(1, &c, 1);
	c = swap_bits(c);
	write(1, &c, 1);
	return (0);
}
