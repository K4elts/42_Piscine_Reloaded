/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 16:00:14 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/20 17:12:38 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	len = max - min;
	ptr = (int *) malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*arr;

	min = -3;
	max = 10;
	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%i\n", arr[i]);
		i++;
	}
	return (0);
}*/
