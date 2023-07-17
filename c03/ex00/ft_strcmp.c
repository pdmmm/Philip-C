/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:08:47 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/16 16:54:39 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d", ft_strcmp(argv[1],argv[2]));
	}
	return (0);
}
*/
