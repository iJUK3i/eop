#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}




int x = 0;

void print_matrix(int board[8][8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			ft_putchar(board[i][j]);
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int is_marked(int board[8][8], int i)
{
	int j;

	j = 0;
	while (j < 8)
	{
		if (board[i][j] == 'Q')
		{
			return (j);
		}
		j++;
	}
	return (-1);
}

int check(int board[8][8], int row, int col)
{
	int be_row;
	int be_col;

	be_row = 0;
	while (be_row < 8)
	{
		be_col = is_marked(board, be_row);
		if (be_col == -1)
			return 1;
		if (col == be_col || abs(row - be_row) == abs(col - be_col))
			return (0);
		be_row++;
	}
	return 1;
}

void nqueen(int board[8][8], int i)
{
	int j;

	if (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			if (check(board, i, j) != 0)
			{
				board[i][j] = 'Q';
				nqueen(board, i + 1);
				board[i][j] = '.';
			}
			j++;
		}
	}
	else
	{
		x++;
		ft_putstr(" valid solution: ");
		ft_putnbr(x);
		ft_putstr("\n");
		print_matrix(board);
	}
}

int main()
{
	int board[8][8];
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = '.';
			j++;
		}
		i++;
	}
	nqueen(board, 0);
	return (0);
}
