/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 13:23:07 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/11 14:00:12 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char b)
{
	unsigned char r;
	unsigned char_len;

	r = 0;
	char_len = 8;
	while (char_len--)
	{
		r = (r << 1) | (b & 1);
		b >>= 1;
	}
	return (r);
}

int	main(void)
{
	unsigned char octet = 2;
	printf("%d\n", reverse_bits(octet));
	return (0);
}
