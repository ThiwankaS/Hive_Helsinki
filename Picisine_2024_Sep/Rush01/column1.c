/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   column1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:49:16 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/15 21:36:48 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct Box
{
	int	height;
	int	right;
	int	left;
	int	up;
	int	down;
}	t_Box;

void	set_column1u(t_Box boxes[4][4][4], int column);
void	set_column2u(t_Box boxes[4][4][4], int column);
void	set_column3u(t_Box boxes[4][4][4], int column);
void	set_column4u(t_Box boxes[4][4][4], int column);

void	solve_column_up(t_Box boxes[4][4][4], int Rule, int column)
{
	if (Rule == 4)
	{
		set_column1u(boxes, column);
	}
	else if (Rule == 3)
	{
		set_column2u(boxes, column);
	}
	else if (Rule == 2)
	{
		set_column3u(boxes, column);
	}
	else if (Rule == 1)
	{
		set_column4u(boxes, column);
	}
}

void	set_column1u(t_Box boxes[4][4][4], int column)
{
	boxes[0][column][0].up = 1;
	boxes[1][column][1].up = 1;
	boxes[2][column][2].up = 1;
	boxes[3][column][3].up = 1;
}

void	set_column2u(t_Box boxes[4][4][4], int column)
{
	boxes[0][column][0].up = 1;
	boxes[0][column][1].up = 1;
	boxes[1][column][0].up = 1;
	boxes[1][column][1].up = 1;
	boxes[1][column][2].up = 1;
	boxes[2][column][0].up = 1;
	boxes[2][column][2].up = 1;
	boxes[2][column][3].up = 1;
	boxes[3][column][0].up = 1;
	boxes[3][column][1].up = 1;
	boxes[3][column][2].up = 1;
	boxes[3][column][3].up = 1;
}

void	set_column3u(t_Box boxes[4][4][4], int column)
{
	boxes[0][column][0].up = 1;
	boxes[0][column][1].up = 1;
	boxes[0][column][2].up = 1;
	boxes[1][column][0].up = 1;
	boxes[1][column][1].up = 1;
	boxes[1][column][3].up = 1;
	boxes[2][column][0].up = 1;
	boxes[2][column][1].up = 1;
	boxes[2][column][2].up = 1;
	boxes[2][column][3].up = 1;
	boxes[3][column][0].up = 1;
	boxes[3][column][1].up = 1;
	boxes[3][column][2].up = 1;
	boxes[3][column][3].up = 1;
}

void	set_column4u(t_Box boxes[4][4][4], int column)
{
	boxes[0][column][3].up = 1;
	boxes[1][column][0].up = 1;
	boxes[1][column][1].up = 1;
	boxes[1][column][2].up = 1;
	boxes[2][column][0].up = 1;
	boxes[2][column][1].up = 1;
	boxes[2][column][2].up = 1;
	boxes[3][column][0].up = 1;
	boxes[3][column][1].up = 1;
	boxes[3][column][2].up = 1;
}
