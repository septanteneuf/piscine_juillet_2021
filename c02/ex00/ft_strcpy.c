/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:55:05 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:44:35 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>

// char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	char	a[] = "Hello";
// 	char	b[] = "ab";

// 	printf("%s\n", b);
// 	ft_strcpy(b, a);
// 	printf("%s\n", b);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
