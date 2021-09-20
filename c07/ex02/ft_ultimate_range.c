/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 11:49:16 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/20 11:49:19 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	len_tab;
	int	i;

	tab = NULL;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len_tab = (max - min);
	tab = (int *)malloc(sizeof (int) * len_tab);
	if (tab == NULL)
		return (-1);
	i = 0;
	while (i < len_tab)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (i);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    int min= 3;
    int max=3;
    int *range;
	printf("%d\n", ft_ultimate_range(&range,min,max));
	free(range);
    return 0;
}
*/