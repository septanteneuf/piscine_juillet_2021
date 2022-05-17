/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 20:12:01 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 15:04:00 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_strlen(char *str);

// int	main(void)
// {
// 	char	c[] = "Je suis ici";
// 	int		i;

// 	i = 0;
// 	printf("ft_strlen: &d", ft_strlen(c));
// 	printf("strlen: &d", strlen(i));
// }

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != 0)
	{
		count++;
		str++;
	}
	return (count);
}
