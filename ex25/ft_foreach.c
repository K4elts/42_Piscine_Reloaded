/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 16:12:12 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/21 16:20:45 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
void	ft_putnbr(int c)
{
	printf("%d", c);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 4, 2, 5};

	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}*/
