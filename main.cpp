#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::cout;
using std::vector;
using std::string;
using std::ifstream;

void ReadBoardFile(string board) {
  ifstream my_file;
  my_file.open(board);
  if (my_file) {
    string line;
    while (getline(my_file, line)) {
      cout << line << "\n";
    }
  }
}

void PrintBoard(const vector<vector<int> > &board)
{
	for (int i = 0; i < board.size(); i++) {
    	for (int j=0; j < board[0].size(); j++) {
      		cout << board[i][j];
    	}
    	cout << "\n";
  	}
}

int main() {
  // vector<vector<int>> board{{0, 1, 0, 0, 0, 0},
  //                           {0, 1, 0, 0, 0, 0},
  //                           {0, 1, 0, 0, 0, 0},
  //                           {0, 1, 0, 0, 0, 0},
  //                           {0, 0, 0, 0, 1, 0}};
  // PrintBoard(board);
  ReadBoardFile("1.board");
}