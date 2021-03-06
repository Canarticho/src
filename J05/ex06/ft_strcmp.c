/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 18:59:56 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/18 02:05:04 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int v;

	v = 0;
	while (s1[v] == s2[v] && s1[v] != '\0' && s2[v] != '\0')
		v++;
	return (s1[v] - s2[v]);
}
