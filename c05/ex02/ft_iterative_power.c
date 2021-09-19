/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 08:44:41 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/17 08:44:43 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = power;
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result = result * nb ;
		i--;
	}
	return (result);
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_power(2,3));
	printf("%d\n",ft_iterative_power(0,0));
	printf("%d\n",ft_iterative_power(1,-2));
	printf("%d\n",ft_iterative_power(-2,0));
	printf("%d\n",ft_iterative_power(1,0));
	printf("%d\n",ft_iterative_power(26,1));

	return (0);
}
*/
