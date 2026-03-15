#include <iostream>
#include <cmath>
using namespace std;

bool isSafe(int mat[][9], int i, int j, int number, int n) {
	// Check row and column
	for (int k = 0; k < n; ++k)
	{
		if (mat[i][k] == number or mat[k][j] == number) {
			return false;
		}
	}

	// Check the square
	n = sqrt(n);
	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int i = si; i < si + n; ++i)
	{
		for (int j = sj; j < sj + n; ++j)
		{
			if (mat[i][j] == number) {
				return false;
			}
		}
	}

	return true; // This cell is safe to keep the number
}

bool sudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// Print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}

		return true;
	}

	// recursive case
	// Agar ek row ke saare col iterate ho gaye uska kaam
	if (j == n) {
		bool kyaBakiSolveHua = sudokuSolver(mat, i + 1, 0, n);
		return kyaBakiSolveHua;
	}

	// Already filled cell ka kaam
	if (mat[i][j] != 0) {
		bool kyaBakiSolveHua = sudokuSolver(mat, i, j + 1, n);
		return kyaBakiSolveHua;
	}

	// Empty cell ka kaam
	for (int number = 1; number <= n; ++number)
	{
		if (isSafe(mat, i, j, number, n) == true) {
			mat[i][j] = number; // If rakhna safe hai toh rakhdo
			bool kyaBakiSolveHua = sudokuSolver(mat, i, j + 1, n);
			if (kyaBakiSolveHua == true) {
				return true;
			}

			mat[i][j] = 0; // backtracking
		}
	}

	return false;// current cell par number rakh paana is not possible
}

int main() {
	int mat[9][9] = {
		{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	sudokuSolver(mat, 0, 0, 9);
	return 0;
}
















