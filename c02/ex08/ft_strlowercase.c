/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:52:34 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:29:55 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strlowercase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr = *ptr + 32;
		}
		ptr++;
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "Hello, World!";

	printf("Original string: %s\n", str);

	char *result = ft_strlowercase(str);

	printf("Modified string: %s\n", result);

	return (0);
}
*/
