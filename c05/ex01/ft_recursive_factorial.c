/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 08:14:20 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/17 08:14:23 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_recursive_factorial(-1));
	printf("%d\n",ft_recursive_factorial(0));
	printf("%d\n",ft_recursive_factorial(1));
	printf("%d\n",ft_recursive_factorial(3));
	return (0);
}
*/
