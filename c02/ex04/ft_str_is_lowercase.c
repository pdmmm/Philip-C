/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:49:16 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:19:11 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
int	ft_str_is_lowercase(char	*str)
{
	while (*str != '\0')
	{
		if ((*str < 'a') || (*str > 'z'))
			return (0);
		str++;
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "123";
    
    int result1 = ft_str_is_lowercase(str1);
    int result2 = ft_str_is_lowercase(str2);
    int result3 = ft_str_is_lowercase(str3);
    
    printf("Result for str1: %d\n", result1);
    printf("Result for str2: %d\n", result2);
    printf("Result for str3: %d\n", result3);
    
    return 0;
}
*/
