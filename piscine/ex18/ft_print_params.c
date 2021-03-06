/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:18:09 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/04 16:33:24 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int ac, char *av[])
{
	int i;

	if (ac <= 1)
		return (0);
	i = 0;
	while (++i < ac)
	{
		while (*av[i])
		{
			ft_putchar(*(av[i]++));
		}
		ft_putchar('\n');
	}
	return (0);
}
