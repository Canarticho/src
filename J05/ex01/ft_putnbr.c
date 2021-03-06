/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 17:37:35 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/16 19:44:34 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		s;

	s = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		s = -s;
	}
	if (nb >= 10 || nb <= -10)
		ft_putnbr(nb / 10 * s);
	ft_putchar(nb % 10 * s + '0');
}
