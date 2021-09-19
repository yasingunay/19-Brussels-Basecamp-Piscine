/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 07:38:54 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/19 07:38:58 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power > 0)
		result = nb;
	else
		result = 1;
	if (power > 1)
		result *= ft_recursive_power(nb, power - 1);
	return (result);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= nb && i <= 46340)
	{
		if (ft_recursive_power(i, 2) == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(100));
	return (0);
}
*/
