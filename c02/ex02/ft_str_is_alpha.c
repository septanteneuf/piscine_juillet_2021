/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:27:19 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:44:53 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int    ft_str_is_alpha(char *str);

// int    main(void)
// {
//     char    c[] = "abc15";

//     printf("%s alpha=%d\n", c, ft_str_is_alpha(c));
// }

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
