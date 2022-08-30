/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:58:27 by coder             #+#    #+#             */
/*   Updated: 2022/08/24 22:57:28 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	m;

	m = 0;
	while (s1[m] == s2[m] && s1[m] != '\0' && s2[m] != '\0')
		m++;
	return (s1[m] - s2[m]);
}

/*int	main(void)
{
	char	a[] = "aaxaaa";
	char	b[] = "aaaa";

	printf("diferença entre os caracteres:%d\n", ft_strcmp(a, b));
	return (0);
}*/