/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:08:43 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:45:10 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_lowercase(char *str);

// int main(void)
// {
// 	char	c[] = "R";

// 	printf("%s alpha=%d\n", c, ft_str_is_lowercase(c));
// }

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str == ' '))
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
