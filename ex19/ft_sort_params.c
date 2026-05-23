/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliao-tr <aliao-tr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:09:43 by aliao-tr          #+#    #+#             */
/*   Updated: 2026/05/23 12:28:22 by aliao-tr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_sorted_args(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_args(int argc, char **argv)
{
	int		i;
	int		sorted;
	char	*temp;

	i = 0;
	sorted = 0;
	if (argc > 1)
	{
		while (sorted < argc - 1)
		{
			i = 0;
			while ((i + 1) < (argc - sorted))
			{
				if (ft_strcmp(argv[i], argv[i + 1]) > 0)
				{
					temp = argv[i];
					argv[i] = argv[i + 1];
					argv[i + 1] = temp;
				}
				i++;
			}
			sorted++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_args(argc, argv);
		ft_print_sorted_args(argc, argv);
	}
	return (0);
}
