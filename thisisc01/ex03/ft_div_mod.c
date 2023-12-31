/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:08:36 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/12 11:10:28 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <unistd.h>
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a = 9;
	int b = 4;
	int div;
	int mod;

	ft_div_mod(57, 52, &div, &mod);
	printf("division: %d\n", div);
	printf("remainder: %d\n", mod);

	return (0);
}
*/
