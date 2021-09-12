/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 05:27:49 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/12 05:34:12 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
 int  main(void)
 {
  char src[] = "test";
  char dst[] = "hello";

  printf("String to be copied: %s\n", src);
  printf("Destination before copying: %s\n", dst);
  ft_strcpy(dst, src);

 printf("After copying: %s\n", dst);
}
*/
