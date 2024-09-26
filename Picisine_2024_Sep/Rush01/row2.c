/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   row2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:49:16 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/15 21:24:48 by tsomacha         ###   ########.fr       */
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

void	set_row1r(t_Box boxes[4][4][4], int row);
void	set_row2r(t_Box boxes[4][4][4], int row);
void	set_row3r(t_Box boxes[4][4][4], int row);
void	set_row4r(t_Box boxes[4][4][4], int row);

void	solve_row_right(t_Box boxes[4][4][4], int Rule, int row)
{
	if (Rule == 4)
	{
		set_row1r(boxes, row);
	}
	else if (Rule == 3)
	{
		set_row1r(boxes, row);
	}
	else if (Rule == 2)
	{
		set_row1r(boxes, row);
	}
	else if (Rule == 1)
	{
		set_row1r(boxes, row);
	}
}

void	set_row1r(t_Box boxes[4][4][4], int row)
{
	boxes[row][3][0].right = 1;
	boxes[row][2][1].right = 1;
	boxes[row][1][2].right = 1;
	boxes[row][0][3].right = 1;
}

void	set_row2r(t_Box boxes[4][4][4], int row)
{
	boxes[row][3][0].right = 1;
	boxes[row][3][1].right = 1;
	boxes[row][2][0].right = 1;
	boxes[row][2][1].right = 1;
	boxes[row][2][2].right = 1;
	boxes[row][1][0].right = 1;
	boxes[row][1][2].right = 1;
	boxes[row][1][3].right = 1;
	boxes[row][0][0].right = 1;
	boxes[row][0][1].right = 1;
	boxes[row][0][2].right = 1;
	boxes[row][0][3].right = 1;
}

void	set_row3r(t_Box boxes[4][4][4], int row)
{
	boxes[row][3][0].right = 1;
	boxes[row][3][1].right = 1;
	boxes[row][3][2].right = 1;
	boxes[row][2][0].right = 1;
	boxes[row][2][1].right = 1;
	boxes[row][2][3].right = 1;
	boxes[row][1][0].right = 1;
	boxes[row][1][1].right = 1;
	boxes[row][1][2].right = 1;
	boxes[row][1][3].right = 1;
	boxes[row][0][0].right = 1;
	boxes[row][0][1].right = 1;
	boxes[row][0][2].right = 1;
	boxes[row][0][3].right = 1;
}

void	set_row4r(t_Box boxes[4][4][4], int row)
{
	boxes[row][3][3].right = 1;
	boxes[row][2][0].right = 1;
	boxes[row][2][1].right = 1;
	boxes[row][2][2].right = 1;
	boxes[row][1][0].right = 1;
	boxes[row][1][1].right = 1;
	boxes[row][1][2].right = 1;
	boxes[row][0][0].right = 1;
	boxes[row][0][1].right = 1;
	boxes[row][0][2].right = 1;
}
