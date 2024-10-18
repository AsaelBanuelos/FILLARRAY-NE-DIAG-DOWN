#include "Std2Arrays.h"
#include <iostream>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }
    int startValue = 1;


    // BEGGINING OF THE MODIFY ALGORITHM (START FORM THE TOP RIGHT CORNER)
    for (int startCol = columns - 1; startCol >= 0; startCol--) {
        int row = 0;
        int col = startCol;

        while (row < rows && col < columns) {
            arr[row][col] = startValue;
            startValue++;
            row++;
            col++;
        }
    }
    // FILL DIAGONALS (ONLY IF ROWS > 0)
    for (int startRow = 1; startRow < rows; startRow++) {
        int row = startRow;
        int col = 0;

        while (row < rows && col < columns) {
            arr[row][col] = startValue;
            startValue++;
            row++;
            col++;
        }
    }
}


void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
    if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << arr[i][j] << "      ";
        }
        std::cout << std::endl;
    }
}


