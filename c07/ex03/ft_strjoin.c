/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 15:17:07 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 15:09:19 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>

// int	ft_strlen(char *str);
// int	ft_len(char **strs, int size, char *sep);
// char	*ft_strcat(char *dest, char *src);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_len(char **strs, int size, char *sep)
{
	int	i;
	int	lon;

	i = 0;
	lon = 0;
	while (i < size)
	{
		lon = lon + ft_strlen(strs[i]);
		i++;
	}
	lon = lon + (size - 1) * ft_strlen(sep) + 1;
	return (lon);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	if (!(str == malloc(sizeof(char) * ft_len(strs, size, sep))))
		return (NULL);
	*str = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
