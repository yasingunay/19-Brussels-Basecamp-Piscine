/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 07:54:34 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/15 07:54:39 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[]="hello1234";
	int result;
	int result2;
	result=ft_strlen(s1);
	result2=strlen(s1);
	printf("%d\n",result);
	printf("original : %d\n",result2);
	return (0);
}
*/
