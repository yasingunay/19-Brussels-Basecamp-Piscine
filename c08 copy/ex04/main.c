/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 13:53:18 by ygunay            #+#    #+#             */
/*   Updated: 2021/09/21 13:53:21 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int	main(void)
{
	int		size;

	char	*strs[5];

	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	*str5;

	str1 = "hello";
	str2 = "my";
	str3 = "name";
	str4 = "is";
	str5 = "Yasin";
	size = 5;

	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;
	
	ft_show_tab(ft_strs_to_tab(size, strs));
}
