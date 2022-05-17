/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:58:05 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:45:22 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_str_is_printable(char *str);

// int	main(void)
// {
// 	char	c[] = "  fd";

// 	printf("return is %d\n", ft_str_is_printable(c));
// }

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if ((*str < 32) || (*str > 126))
			return (0);
		str ++;
	}
	return (1);
}
