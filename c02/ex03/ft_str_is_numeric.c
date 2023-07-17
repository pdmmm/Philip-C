/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:49:05 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:18:13 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
int	ft_str_is_numeric(char	*str)
{
	while (*str != '\0')
	{
		if ((*str < '0') || (*str > '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main()
{
	char str1[] = "Hello";
	char str2[] = "123";

	int	result1 = ft_str_is_numeric(str1);
	int	result2 = ft_str_is_numeric(str2);

	printf("Result for str1: %d\n", result1);
	printf("Result for str2: %d\n", result2);

	return 0;
}
*/
