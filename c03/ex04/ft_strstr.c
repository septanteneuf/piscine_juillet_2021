/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:41:00 by bbourcy           #+#    #+#             */
/*   Updated: 2021/07/18 21:23:14 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (str[index1] != '\0')
	{
		index2 = 0;
		while (to_find[index2] == str[index1 + index2])
		{
			if (to_find[index2 + 1] == '\0')
			{
				return (str + index1);
			}
			index2++;
		}
		index1++;
	}
	return (0);
}
