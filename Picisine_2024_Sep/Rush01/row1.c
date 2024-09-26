/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:49:16 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/15 21:26:34 by tsomacha         ###   ########.fr       */
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

void	set_row1l(t_Box boxes[4][4][4], int row);
void	set_row2l(t_Box boxes[4][4][4], int row);
void	set_row3l(t_Box boxes[4][4][4], int row);
void	set_row4l(t_Box boxes[4][4][4], int row);

void	solve_row_left(t_Box boxes[4][4][4], int Rule, int row)
{
	if (Rule == 4)
	{
		set_row1l(boxes, row);
	}
	else if (Rule == 3)
	{
		set_row2l(boxes, row);
	}
	else if (Rule == 2)
	{
		set_row3l(boxes, row);
	}
	else if (Rule == 1)
	{
		set_row4l(boxes, row);
	}
}

void	set_row1l(t_Box boxes[4][4][4], int row)
{
	boxes[row][0][0].left = 1;
	boxes[row][1][1].left = 1;
	boxes[row][3][3].left = 1;
}

void	set_row2l(t_Box boxes[4][4][4], int row)
{
	boxes[row][0][0].left = 1;
	boxes[row][0][1].left = 1;
	boxes[row][1][0].left = 1;
	boxes[row][1][1].left = 1;
	boxes[row][1][2].left = 1;
	boxes[row][2][0].left = 1;
	boxes[row][2][2].left = 1;
	boxes[row][2][3].left = 1;
	boxes[row][3][0].left = 1;
	boxes[row][3][1].left = 1;
	boxes[row][3][2].left = 1;
	boxes[row][3][3].left = 1;
}

void	set_row3l(t_Box boxes[4][4][4], int row)
{
	boxes[row][0][0].left = 1;
	boxes[row][0][1].left = 1;
	boxes[row][0][2].left = 1;
	boxes[row][1][0].left = 1;
	boxes[row][1][1].left = 1;
	boxes[row][1][3].left = 1;
	boxes[row][2][0].left = 1;
	boxes[row][2][1].left = 1;
	boxes[row][2][2].left = 1;
	boxes[row][2][3].left = 1;
	boxes[row][3][0].left = 1;
	boxes[row][3][1].left = 1;
	boxes[row][3][2].left = 1;
	boxes[row][3][3].left = 1;
}

void	set_row4l(t_Box boxes[4][4][4], int row)
{
	boxes[row][0][3].left = 1;
	boxes[row][1][0].left = 1;
	boxes[row][1][1].left = 1;
	boxes[row][1][2].left = 1;
	boxes[row][2][0].left = 1;
	boxes[row][2][1].left = 1;
	boxes[row][2][2].left = 1;
	boxes[row][3][0].left = 1;
	boxes[row][3][1].left = 1;
	boxes[row][3][2].left = 1;
}
