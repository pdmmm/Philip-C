/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:29:28 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/12 11:11:43 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
/*
int main(void)
{
	int a = 9;
	int b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("division: %d\n", a);
	printf("remainder: %d\n", b);

	return (0);
}
*/
