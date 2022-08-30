/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:56:47 by coder             #+#    #+#             */
/*   Updated: 2022/08/29 21:10:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb != 0)
	{
		fact = fact * nb;
		nb--;
	}	
	return (fact);
}

/*int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/