/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:26:50 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/23 13:31:28 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		strlen;
	int		i;
	char	*ptr;

	i = 0;
	strlen = ft_strlen(src);
	ptr = malloc((sizeof(char) * strlen));
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	return (ptr);
}
