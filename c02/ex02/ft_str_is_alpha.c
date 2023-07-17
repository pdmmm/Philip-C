/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:02:00 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:09:17 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>
*/
int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(((*str >= 'A') && (*str <= 'Z')) || \
				((*str >= 'a') && (*str <= 'z'))))
			return (0);
		str++;
	}
	return (1);
}
/*
int main()
{
    char str1[] = "Hello";
    char str2[] = "123";
    
    int result1 = ft_str_is_alpha(str1);
    int result2 = ft_str_is_alpha(str2);
    
    printf("Result for str1: %d\n", result1);
    printf("Result for str2: %d\n", result2);
    
    return 0;
}
*/
