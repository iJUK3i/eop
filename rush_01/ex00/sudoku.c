/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 23:05:54 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/21 23:06:17 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_valid(int number, int puzzle[][9], int row, int column);
int		solve_sudoku(int puzzle[][9], int row, int column);

/*
**This function is recursive. It scans each row first.
**Once its done each column in a row, it moves to the next row.
**In the while loop, if the number has found a location, it tries to
**place the next number. If it fails it sets the value as 0.
**This is a typical recursive function where we have terminating conditions
**(the if statements) followed by the while loop which has recursive calls.
*/

int		solve_sudoku(int puzzle[][9], int row, int column)
{
	int nextnum;

	nextnum = 0;
	if (row == 9)
		return (1);
	if (puzzle[row][column])
	{
		if (column == 8)
			return (solve_sudoku(puzzle, row + 1, 0));
		else
			return (solve_sudoku(puzzle, row, column + 1));
	}
	while (++nextnum < 10)
	{
		if (is_valid(nextnum, puzzle, row, column))
		{
			puzzle[row][column] = nextnum;
			if (column == 8 && (solve_sudoku(puzzle, row + 1, 0)))
				return (1);
			else if (solve_sudoku(puzzle, row, column + 1))
				return (1);
			puzzle[row][column] = 0;
		}
	}
	return (0);
}

/*
**This functine receives the call from the main() and passes the call
**to solve_sudoku by setting the row and column to 0, 0.
*/

int		call_sudoku(int puzzle[][9])
{
	return (solve_sudoku(puzzle, 0, 0));
}
