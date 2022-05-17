/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:36:07 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:45:29 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strupcase(char *str);

// int main(void)
// {
// 	char	c[] = "aAbBcC10";

// 	printf("return is %s", ft_strupcase(c));
// }

char	*ft_strupcase(char *str)
{
	char	*s;

	s = str;
	while (*s != '\0')
	{
		if (*s >= 97 && *s <= 'z')
		{
			*s -= 32;
		}
		s++;
	}
	return (str);
}
