/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:06:53 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/12 15:06:56 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
// Printable Characters decimal 32-126   !!!127=delete!!!
//non printable "\x1\x5\xa\x15";
#include <stdio.h>
int main()
{
	char str[100]; //test space
	ft_str_is_printable(str);
	printf("%d\n",ft_str_is_printable(str));
	return (0);
}
*/
