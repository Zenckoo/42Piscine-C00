/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isitbon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 23:06:35 by isitbon           #+#    #+#             */
/*   Updated: 2022/08/03 17:16:29 by isitbon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = '0';
	while (c1 <= '9')
	{
		c2 = c1 + 1;
		while (c2 <= '9')
		{
			c3 = c2 + 1;
			while (c3 <= '9')
			{
				write(1, &c1, 1);
				write(1, &c2, 1);
				write(1, &c3, 1);
				if (!(c1 == '7' && c2 == '8' && c3 == '9'))
					write(1, ", ", 2);
					c3++;
			}
			c2++;
		}
		c1++;
	}
}