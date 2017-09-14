#include <iostream>
#include "matrix_functions.cpp"
#include "matrix_constants.h"
using namespace std;


int main()
{
    int row = 4, col = 4, num;
    int matrix[ROW][COL] =  {{2, 8, 12, 16}, {3, 9, 13, 18},
                             {7, 14, 15, 20}, {11, 19, 25, 28}
                            };

    print_matrix(matrix, row, col);

    PRINT("Enter number to search in matrix: ");
    scanf("%d", &num);
    if(search_number_2(matrix, num, row, col) == 1)
    {
        PRINT("Number Found.");
    }
    else
    {
        PRINT("Number Not Found.");
    }


}
