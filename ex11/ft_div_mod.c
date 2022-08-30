/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:52:09 by coder             #+#    #+#             */
/*   Updated: 2022/08/24 21:17:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main(void)
{
	int a, b, div, mod, *ptr1, *ptr2;

	a = 4;
	b = 2;
	ptr1 = &div;
	ptr2 = &mod;
	
	ft_div_mod(a, b, ptr1, ptr2);
	printf("%d\n", div);
	printf("%d\n", mod); 
}*/