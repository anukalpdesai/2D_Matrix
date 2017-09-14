#include<stdio.h>
#include"matrix_constants.h"

void print_matrix(int matrix[ROW][COL], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int search_number_1(int matrix[ROW][COL], int num, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(matrix[i][j] == num)
                return 1;
        }
    }
    return 0;
}

int search_number_2(int matrix[ROW][COL], int num, int row, int col)
{
   int i=0, j=col-1;
   while(i<row && j>=0)
   {
       if(matrix[i][j] == num)
       {
           return 1;
       }
       if(matrix[i][j] > num)
       {
           j--;
       }
       else
       {
           i++;
       }
   }
   return 0;

}







