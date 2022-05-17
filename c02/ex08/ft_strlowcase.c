/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:16:32 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 15:02:52 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strlowcase(char *str);

// int	main(void)
// {
// 	char	c[]= "ABcD";
// 	printf("return is %s\n", ft_strlowcase(c));
// }

char	*ft_strlowcase(char *str)
{
	char	*s;

	s = str;
	while (*s != '\0')
	{
		if (*s >= 'A' && *s <= 'Z')
		{
			*s += 32;
		}
		s++;
	}
	return (str);
}
