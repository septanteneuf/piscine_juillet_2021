/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:09:17 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:44:42 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	int		nb;

// 	nb = 12;
// 	char	a[] = "maisonhjudysagcvya";
// 	char	b[nb];
// 	printf("%s\n" "%s\n", a, b);
// 	ft_strncpy(b, a, nb);
// 	printf("%s\n" "%s\n", a, b);

// 	write (1, &b, 40);
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
