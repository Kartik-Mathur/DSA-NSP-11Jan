#include <iostream>
using namespace std;

bool isSafe(int board[][10], int r, int c,
            int n) {
	// Check current col
	for (int i = 0; i < r; ++i)
	{
		if (board[i][c]) return false;
	}

	// Check upper right diagonal
	int og_r = r, og_c = c;

	while (r >= 0 and c < n) {
		if (board[r--][c++]) return false;
	}
	// Check upper left diagonal
	r = og_r;
	c = og_c;
	while (r >= 0 and c >= 0) {
		if (board[r--][c--]) return false;
	}

	// agar upr teeno jagah kahi bhi queen nhi h that means its safe to put queen here
	return true;
}
cout << endl;

bool nQueen(int board[][10], int row, int n) {
	// base case
	if (row == n) {
		// print the board
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				// cout << board[i][j] << " ";
				cout << (board[i][j] == 1 ? "Q " : "_ ");
			}
			cout << endl;
		}
		cout << endl;

		return false; // All done
	}

	// recursive case
	for (int col = 0; col < n ; col++) {
		if (isSafe(board, row, col, n) == true) {
			board[row][col] = 1; // Place the queen
			bool kyaBakiPlaceHui = nQueen(board, row + 1, n);
			if (kyaBakiPlaceHui == true) {
				return true;
			}

			board[row][col] = 0; // Backtracking
		}
	}


	// Agar upar kisi bhi col mei queen place nhi ho paati toh return false
	return false;
}

int main() {
	int n;
	cin >> n;
	int board[10][10] = {0};
	nQueen(board, 0, n);

	return 0;
}
















