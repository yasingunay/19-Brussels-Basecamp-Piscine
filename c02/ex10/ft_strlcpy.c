/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:56:33 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/12 20:56:40 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		 ++i;
	}
	dest[i] = '\0';
	return (count);
}

/*
#include<stdio.h>
int main()
{
    char src[]="test";
    char dest[]="hello there";
    ft_strlcpy(dest, src,4);
    printf("%s\n",dest);
    return 0;
}
*/
