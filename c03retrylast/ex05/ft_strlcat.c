/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:45:47 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/14 20:45:50 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	m;
	unsigned int	p;

	n = 0; //dest lent
	while (dest[n] != '\0')
		n++;
	p = 0; // src len
	while (src[p] != '\0')
		p++;
	m = 0;
	if (size == 0)
		return (p);
	while ((src[m] != '\0') && ((n + m) < (size - 1)))
	{
		dest[n + m] = src[m];
		m ++;
	}
	dest[n + m] = '\0';
	if (size > n)
		return (n + p);
	return (size + p);
}


#include <stdio.h>
#include <string.h>

int main()
{
    char dest[20] = "hello";
    char src[] = "world";
    int r;
	int size =10;

    //r=ft_strlcat(dest,src,size);
	
    r=strlcat(dest,src,size);
	printf("%s\n",dest);

    printf("Value returned: %d\n",r);
    if( size <= r )
       printf("String truncated\n");
    if ( size >r)
    	printf("String was fully copied\n");

    return(0);
}

