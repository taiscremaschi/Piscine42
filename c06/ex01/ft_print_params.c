/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 00:24:54 by tbolzan-          #+#    #+#             */
/*   Updated: 2023/02/11 14:08:31 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 1;
	x = 0;
	while (i < argc)
	{
		if (argv[i][x] != '\0')
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		else if (argv[i][x] == '\0')
		{
			write(1, "\n", 1);
			i++;
			x = 0;
		}
	}
	return (0);
}
