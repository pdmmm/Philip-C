/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmosser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 20:32:45 by pmosser           #+#    #+#             */
/*   Updated: 2023/07/11 14:28:16 by pmosser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}
int	main(void)
{
	int a = 9;
	int b = 4;
	int division;
	int remainder;
	int *div;
	int *mod;

	ft_div_mod(57, 52, &div, &mod);
	printf("division: %d\n", division);
	printf("remainder: %d\n", remainder);

	return (0);
}
