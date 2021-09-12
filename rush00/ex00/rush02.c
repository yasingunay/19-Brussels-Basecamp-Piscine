/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 08:24:48 by tfockede          #+#    #+#             */
/*   Updated: 2021/09/11 08:24:54 by tfockede         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);	
void	ft_horizontal_line1(int x);
void	ft_horizontal_line2(int x);
void	ft_vertical_line(int x, int y);

void	rush(int x, int y)
{
	if (y > 0)
		ft_horizontal_line1(x);
	if (x > 0)
		ft_vertical_line(x, y);
	if (y > 1)
		ft_horizontal_line2(x);
}

void	ft_horizontal_line1(int x)
{
	int		lx;
	char	corner1;
	char	corner2;
	char	fillh;

	corner1 = 'A';
	corner2 = 'A';
	fillh = 'B';
	if (x > 0)
		ft_putchar(corner1);
	if (x > 2)
	{
		lx = x - 2;
		while (lx-- > 0)
			ft_putchar(fillh);
	}
	if (x > 1)
		ft_putchar(corner2);
	ft_putchar('\n');
}

void	ft_vertical_line(int x, int y)
{
	int		ly;
	int		lx;
	char	fillv;

	fillv = 'B';
	if (y > 2)
	{
		ly = y - 2;
		while (ly-- > 0)
		{
			ft_putchar(fillv);
			lx = x - 2;
			while (lx-- > 0)
				ft_putchar(' ');
			if (x > 1)
				ft_putchar(fillv);
			ft_putchar('\n');
		}
	}
}

void	ft_horizontal_line2(int x)
{
	int		lx;
	char	corner3;
	char	corner4;
	char	fillh;

	corner3 = 'C';
	corner4 = 'C';
	fillh = 'B';
	if (x > 0)
		ft_putchar(corner3);
	if (x > 2)
	{
		lx = x - 2;
		while (lx-- > 0)
			ft_putchar(fillh);
	}
	if (x > 1)
		ft_putchar(corner4);
	ft_putchar('\n');
}
