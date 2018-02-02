/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 23:29:46 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/21 23:08:54 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**This function returns the position of present  block.
**This is used by both columns and rows.
**Example: if we are at row 2 i.e. block 1, this block
**would give the same block in the same row.
*/

int		get_block(int currposition)
{
	return (3 * (currposition / 3));
}

/*
**This function returns the position of next block.
**This is used by both columns and rows.
**Example: if we are at row 2 i.e. block 1, this block
**would help us reach at block 2 in the same row
*/

int		get_2nd(int currposition)
{
	return ((currposition + 2) % 3);
}

/*
**This function returns the position of block which is next to its next block.
**This is used by both columns and rows.
**Example: if we are at row 2 i.e. block 1, this block
**would help us reach at block 3 in the same row
*/

int		get_3rd(int currposition)
{
	return ((currposition + 4) % 3);
}

/*
**num is the number which is being checked.
**puzzle is the board with all the values.
**row is the current row
**column is the current column.
**
**The first while loop is used to check if the current row and column
**has the same number. If they have the same number, return 1.
**The next 4 if statements check for the remaining 4 places in one box of 9
**places (5 are covered by previos loop i.e. column and row, so check other 4.)
*/

int		is_valid(int num, int puzzle[][9], int row, int col)
{
	int i;
	int blockrow;
	int blockcol;

	i = 0;
	blockrow = get_block(row);
	blockcol = get_block(col);
	while (i < 9)
	{
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row][i] == num)
			return (0);
		i++;
	}
	if (puzzle[get_2nd(row) + blockrow][get_2nd(col) + blockcol] == num)
		return (0);
	if (puzzle[get_3rd(row) + blockrow][get_2nd(col) + blockcol] == num)
		return (0);
	if (puzzle[get_2nd(row) + blockrow][get_3rd(col) + blockcol] == num)
		return (0);
	if (puzzle[get_3rd(row) + blockrow][get_3rd(col) + blockcol] == num)
		return (0);
	return (1);
}
