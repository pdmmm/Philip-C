/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:02:57 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:24:03 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 'A') || (*str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "";

    int result1 = ft_str_is_uppercase(str1);
    int result2 = ft_str_is_uppercase(str2);
    int result3 = ft_str_is_uppercase(str3);

    printf("Result for str1: %d\n", result1);
    printf("Result for str2: %d\n", result2);
    printf("Result for str3: %d\n", result3);

    return 0;
}
*/
