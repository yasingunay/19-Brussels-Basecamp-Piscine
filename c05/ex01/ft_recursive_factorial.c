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
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		fact = ft_recursive_factorial(nb - 1) * nb;
	return (fact);
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
