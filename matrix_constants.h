#ifndef MATRIX_CONSTANTS_H_INCLUDED
#define MATRIX_CONSTANTS_H_INCLUDED

#define ROW 100
#define COL 100

#define PRINT(msg) printf("\n%s\n", msg);

void print_matrix(int matrix[ROW][COL], int row, int col);
int search_matrix_1(int matrix[ROW][COL], int num, int row, int col);


#endif // MATRIX_CONSTANTS_H_INCLUDED
