/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:40:08 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:27:46 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 32) || (*str > 126))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "HELLO";
    char str2[] = "Hello\n";
    char str3[] = "";

    int result1 = ft_str_is_printable(str1);
    int result2 = ft_str_is_printable(str2);
    int result3 = ft_str_is_printable(str3);

    printf("Result for str1: %d\n", result1);
    printf("Result for str2: %d\n", result2);
    printf("Result for str3: %d\n", result3);

    return 0;
}
*/
