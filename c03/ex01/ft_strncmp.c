/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:40:21 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/13 21:40:24 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
In the last tutorial we discussed strcmp() function which is used 
for comparing 
two strings. In this guide, we will discuss strncmp() 
function which is same as 
strcmp(), except that strncmp() comparison is limited to the number of 
characters specified during the function call. For example 
strncmp(str1, str2, 4) would compare only the first four characters of 
strings str1 and str2.

0, if both the strings str1 and str2 are equal
>0, if the ASCII value of first unmatched character of str1 is greater than str2
<0, if the ASCII value of first unmatched character of str1 is less than str2
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (i < n))
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		if (s1[i] == s2[i])
			i++;
	}
	return (0);
}

/*      
#include <stdio.h>
#include <string.h>
int main()
{
    int result;
    int result2;
    char s1[] = "abcz", s2[] = "abc!";
    result=ft_strncmp(s1,s2,3);
    printf("ft_strncmp: %d\n",result);
    result2=strncmp(s1,s2,3);
    printf("strncmp: %d\n",result2);
    
    
    return 0;
}
*/