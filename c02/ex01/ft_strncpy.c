/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:37:25 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 14:22:55 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest [i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Hello, World!";
	char dest[20];
	ft_strncpy(dest, src, 13);

	printf("copied string: %s\n", dest);

	return (0);
}
*/
