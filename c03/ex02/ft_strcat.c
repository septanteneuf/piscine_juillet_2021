/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 17:56:04 by bbourcy           #+#    #+#             */
/*   Updated: 2021/07/18 19:52:15 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	index1;
	int	index2;

	index1 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}
	index2 = 0;
	while (src[index2] != '\0')
	{
		dest[index1 + index2] = src[index2];
		index2++;
	}
	dest[index1 + index2] = '\0';
	return (dest);
}
