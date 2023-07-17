/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:44:08 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/16 17:16:22 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdlib.h>
#include <stdio.h>
*/
int	ft_strlen(char	*str)
{
	int	count;	

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest + ft_strlen(dest);
	while (*src != '\0' && nb--)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%s", ft_strncat(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
*/
