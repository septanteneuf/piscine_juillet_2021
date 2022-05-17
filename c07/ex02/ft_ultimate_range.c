/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy <bbourcy@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 18:32:46 by bbourcy           #+#    #+#             */
/*   Updated: 2022/05/17 14:53:37 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

// int	ft_ultimate_range(int **range, int min, int max);

// int	main(void)
// {
// 	int	max;
// 	int	min;
// 	int	range;
// 	int	*tab = ft_ultimate_range(min, max, range);
// 	int	i;

// 	min = 10;
// 	max = 31;
// 	i = 0;

// }

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (-1);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[i++] = min;
		min++;
	}
	return (tab);
}
