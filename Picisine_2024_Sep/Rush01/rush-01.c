/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 17:49:16 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/15 21:43:20 by tsomacha         ###   ########.fr       */
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
void	initializing_boxes(t_Box boxes[4][4][4]);
void	solve_row_left(t_Box boxes[4][4][4], int Rule, int row);
void	solve_row_right(t_Box boxes[4][4][4], int Rule, int row);
void	solve_column_up(t_Box boxes[4][4][4], int Rule, int column);
void	solve_column_down(t_Box boxes[4][4][4], int Rule, int column);
void	getting_user_inputs(char *str, int *rules);
void	solve_puzzle_clolumn(int *rules, t_Box boxes[4][4][4]);
void	solve_puzzle_rows(int *rules, t_Box boxes[4][4][4]);
void 	print_solution(void);

int	main(int argc, char *argv[])
{
	t_Box	boxes[4][4][4];
	int		rules[16];
	char	*str;

	if (argc > 1)
	{
		str = argv[1];
		getting_user_inputs(str, rules);
		initializing_boxes(boxes);
		solve_puzzle_clolumn(rules, boxes);
		solve_puzzle_rows(rules, boxes);
		print_solution();
	}
	return (0);
}

void	getting_user_inputs(char *str, int *rules)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (str[count] != '\0' )
	{
		if (str[count] != ' ')
		{
			if (str[count] == '1')
				rules[x] = 1;
			else if (str[count] == '2')
				rules[x] = 2;
			else if (str[count] == '3')
				rules[x] = 3;
			else if (str[count] == '4')
				rules[x] = 4;
			x++;
		}
		count++;
	}
}

void	initializing_boxes(t_Box boxes[4][4][4])
{
	int	l;
	int	m;
	int	n;

	l = 0;
	while (l < 4)
	{
		m = 0;
		while (m < 4)
		{
			n = 0;
			while (n < 4)
			{
				boxes[l][m][n].height = n + 1;
				boxes[l][m][n].left = 0;
				boxes[l][m][n].right = 0;
				boxes[l][m][n].up = 0;
				boxes[l][m][n].down = 0;
				n++;
			}
			m++;
		}
		l++;
	}
}

void	solve_puzzle_clolumn(int *rules, t_Box boxes[4][4][4])
{
	int	step;
	int	n1;
	int	n2;

	step = 0;
	while (step < 8)
	{
		n1 = 0;
		while (n1 < 4)
		{
			solve_column_up(boxes, rules[step], n1);
			n1++;
		}
		n2 = 0;
		while (n2 < 4)
		{
			solve_column_down(boxes, rules[step], n2);
			n2++;
		}
		step++;
	}
}

void	solve_puzzle_rows(int *rules, t_Box boxes[4][4][4])
{
	int	step;
	int	n1;
	int	n2;

	step = 8;
	while (step < 8)
	{
		n1 = 0;
		while (n1 < 4)
		{
			solve_row_left(boxes, rules[step], n1);
			n1++;
		}
		n2 = 0;
		while (n2 < 4)
		{
			solve_row_right(boxes, rules[step], n2);
			n2++;
		}
		step++;
	}
}


