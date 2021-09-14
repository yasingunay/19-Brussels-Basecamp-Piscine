/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:00:27 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/14 13:00:30 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	lf;
	int	i;
	int	j;

	lf = 0;
	while (to_find[lf] != '\0')
		lf ++;
	if (lf == 0)
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0' )
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (j + 1 == lf)
				return (str + i);
			j ++;
		}
		i ++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char strbig[]="Hello w world";
    char strlittle[]="world";
    char *result;

    //result= strstr(strbig, strlittle);
  	result=ft_strstr(strbig, strlittle);
    
    printf("%s\n", result);
   
    return 0;
    
}
*/
