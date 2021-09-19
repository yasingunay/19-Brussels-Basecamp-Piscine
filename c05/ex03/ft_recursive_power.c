/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 06:30:18 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/19 06:30:26 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		result = nb;
	if (power > 1)
		result = ft_recursive_power(nb, power - 1) * result;
	return (result);
}

/*
#include <stdio.h>
int main()
{
	int result;
	int nb = -2;
	int power = 0;
	result= ft_recursive_power(nb,power);
	printf("%d\n",result);
	return (0);
}
*/