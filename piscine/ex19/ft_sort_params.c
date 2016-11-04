/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chle-van <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:34:18 by chle-van          #+#    #+#             */
/*   Updated: 2016/11/04 17:33:19 by chle-van         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putchar(char c)
{
	
	write (1, &c, 1);
}

void	ft_swap(char **s1, char **s2)
{
	char *tmp;
	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;

}

int main(int ac, char *av[])
{
	int i;

	if (ac < 1)
		return (0);
	i = 1 ;
	while (i < ac)
	{
	write (1, "1", 1);
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
	write (1, "2", 1);
			ft_swap(&av[i], &av[i + 1]);
			i = 1;
		}
	}
	i++;
	i = 0;
	while (++i < ac)
	{
		while (*av[i])
			ft_putchar(*(av[i]++));
		ft_putchar('\n');
		i++;
	}
	return (0);
}
