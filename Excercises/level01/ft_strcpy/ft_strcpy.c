/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klozano- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:00:22 by klozano-          #+#    #+#             */
/*   Updated: 2018/10/10 18:09:30 by klozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int		main(int argc, char **argv)
{
	char s2[1000];
	(void)argc;
	printf("s1: %s\n", argv[1]);
	printf("s2: %s\n", s2);
	ft_strcpy(argv[1], s2);
	printf("New s2: %s\n", s2);
	return (0);
}
