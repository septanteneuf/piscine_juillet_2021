/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 22:18:30 by bbourcy           #+#    #+#             */
/*   Updated: 2021/07/19 14:24:09 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *dest);

int	ft_strlen(char *dest)
{
	int	c;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c;
	unsigned int	destlen;

	c = 0;
	destlen = ft_strlen(dest);
	while (src[c] != '\0' && c < nb)
	{
		dest[destlen + c] = src[c];
		c++;
	}
	dest[destlen + c] = '\0';
	return (dest);
}
