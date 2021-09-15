/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 04:51:16 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/13 04:51:18 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
0 if both the strings are equal
>0 if the ASCII value of first unmatched character of 
string str1 is greater than the character in string str2
<0 if the ASCII value of first unmatched character of 
string str1 is less than the character in string str2

According to many online tutorials this function returns positive 
value when the first string is greater than second string, 
which is absolutely not true or you can say not phrased correctly,
because when we say that one string is greater than second we are 
talking in terms of length. However this function doesn’t compare 
length, it matches the ASCII value of each character of first string
with the  second string and returns positive if the ASCII value of 
first unmatched character in first string is greater than
the ASCII value of the unmatched character of second string

http://facweb.cs.depaul.edu/sjost/it212/documents/ascii-pr.htm
*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
    char s1[] = "abcd!#", s2[] = "abcdz";
    result=ft_strcmp(s1,s2);
    printf("ft_strcmp: %d\n",result);
    result2=strcmp(s1,s2);
    printf("strcmp: %d\n",result2);
    
    
    return 0;
}
*/
