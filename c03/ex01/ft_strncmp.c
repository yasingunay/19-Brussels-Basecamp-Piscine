/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 10:56:31 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/15 10:56:33 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
		{
			++i;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char	s1[] = "abc";
	char	s2[] = "abc";
	unsigned int	n;
	int				result;

	n = 6;
	result = ft_strncmp(s1, s2, n);
	printf("return(ft) is %d\n", result);
	result = strncmp(s1, s2, n);
	printf("return(strncmp) is %d\n", result);
}
*/
