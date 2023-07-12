/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 12:23:14 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/12 11:05:44 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_swap(int *a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main(void)
{
	int	a = 5;
	int	b = 10;

	printf("before: a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: a = %d, b = %d\n", a, b);

	return 0;
}
*/
