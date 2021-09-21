/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 05:57:12 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/20 05:57:15 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len_src;
	int		i;

	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	copy = (char *) malloc (sizeof (char) * (len_src + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len_src)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char* src = "Yasin";
	int len_src =strlen(src);
	printf("%d\n", len_src);

	char*copy =ft_strdup(src);
	printf("%s\n",copy);

	int len_copy =strlen(copy);
	printf("%d\n", len_copy);

	free(copy);

	return (0);
}
*/