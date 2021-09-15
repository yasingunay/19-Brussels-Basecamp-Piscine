/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 20:54:34 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/15 20:54:37 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;
	int	n;

	result = 0;
	sign = 1;
	i = 0;
	n = 0;
	while (str [i] && (str[i] == '-' || str[i] == '+' || str[i] == ' '))
	{
		if (str [i] == '-')
			n++;
		i++;
	}
	if (n % 2 == 1)
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
int main()
{
	char str1[]="    ---+--+1234ab567";
	char str2[]="1";
	int val1= ft_atoi(str1);
	int val2= ft_atoi(str2);
	printf("%d\n",val1);
	printf("%d\n",val1+val2);
	
	return 0;
}
*/