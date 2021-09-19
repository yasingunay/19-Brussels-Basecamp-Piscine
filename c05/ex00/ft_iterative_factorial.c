/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:49:45 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/16 18:49:47 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0 )
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}

/*
#include <stdio.h>

int main()
{
    int nb= 8;
    ft_iterative_factorial(nb);
    printf("%d\n",ft_iterative_factorial(nb));
    return 0;
}
*/
