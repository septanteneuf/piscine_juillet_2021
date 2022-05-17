/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 22:27:18 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:45:03 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_numeric(char *str);

// int	main(void)
// {
// 	char	c[] = "";

// //	printf("%s alpha=%d\n", c, ft_str_is_numeric(c));
// 	write(1, &c, 1);
// }

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= '0' && *str <= '9') || (*str == ' '))
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
