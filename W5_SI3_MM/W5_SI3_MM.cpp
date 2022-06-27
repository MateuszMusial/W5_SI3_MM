#include <iostream>
#include "Bacillus.h"
#include "Coccus.h"
#include "Spirillum.h"

void printBoard();
void createObj(char board);

char board[50][50];

int main()
{
	printBoard();
	createObj(board[50][50]);
	
	
}

void printBoard()
{
	char c = '.';
	
	for (int i = 0; i < 50; i++) {
		for (int j = 0; j < 50; j++) {
			 board[i][j] = c;
		}
	}

	for (int i = 0; i < 50; i++) {
		std::cout << "\n";
		for (int j = 0; j < 50; j++) {
			std::cout << board[i][j];
		}
	}
}

void createObj(char board) {

	int numOfObj, BacillNum, CoccNum, SpirllNum;

	numOfObj = rand() % 50 + 1;
	BacillNum = rand() % numOfObj + 1;
	CoccNum = rand() % numOfObj - BacillNum + 1;
	SpirllNum = rand() % numOfObj - CoccNum - BacillNum  + 1;
	
	//for (int i = 0; i < BacillNum; i++) {
	//	Bacillus B(3 ,i +5);
	//}
}