/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:42:56 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/15 12:28:34 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
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
    
    char *result = ft_strupcase(str);
    
    printf("Modified string: %s\n", result);
    
    return 0;
}
*/
