/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 09:43:11 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/20 09:43:14 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dizi;
	int	len_dizi;
	int	i;

	dizi = NULL;
	if (min >= max)
		return (dizi);
	len_dizi = (max - min) + 1;
	dizi = (int *)malloc(sizeof (int) * len_dizi);
	i = 0;
	while (i < len_dizi)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	return (dizi);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    int min= 6;
    int max=6;
    int *dizi2;
    dizi2=ft_range(min,max);

    int i =0;
    while(i < max-min)
    {
        printf("%d ", dizi2[i]);
        i++;
    }
	free(dizi2);
    return 0;
}
*/
