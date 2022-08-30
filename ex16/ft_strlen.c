/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:47:57 by coder             #+#    #+#             */
/*   Updated: 2022/08/24 21:56:25 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	return (m);
}

/*int main()
{
	char str[] = "This is the way";
	int result = ft_strlen(str);
	printf("The length of the string is %d\n", result);
	return 0;
}*/