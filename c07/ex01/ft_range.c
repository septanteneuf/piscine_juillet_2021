/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 10:25:01 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:53:30 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab = ft_range(min, max);
// 	int	i;

// 	min = 39;
// 	max = 45;
// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// 	printf("%p\n", tab);
// }

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (0);
	while (min < max)
	{
		tab[i++] = min;
		min++;
	}
	return (tab);
}
