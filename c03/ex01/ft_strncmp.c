/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:51:21 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/17 07:36:45 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && i < n - 1 && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	char	*s1 = "Mosser";
	char	*s2 = "Mossad";
	ft_strncmp(s1, s2, 5);

	printf("compared: %d", ft_strncmp(s1,s2,5));

	return (0);
}
*/
