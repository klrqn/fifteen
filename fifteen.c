#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void array2d(int d);

int main(void)
{
    int size;
    printf("size?");
    scanf("%i", &size);
    
    array2d(size);
}

void array2d(int d)
{
    int board[d][d];
    int row = 0, col = 0;
    // number of total possible tiles
    int tile = d*d-1;
    // determine if 1 and 2 need to be swapped
   /// int swap = tile % 2;
    
    // if (swap12 == 0) 1 and 2 need to be swapped 
    
    
    // assign array values, trying new bracket layout
    for (row = 0; row < d; row++) {
        for (col = 0; col < d; col++) { 
            board[row][col] = tile--;
        }
    }
    
    // switch tile 1 and 2
    if (d % 2 == 0)
    {
        // int temp = board[row-1][col-2];
        // int temp2 = board[row-1][col-3];
        board[row-1][col-2] = board[row-1][col-3];
        board[row-1][col-3] = temp;
        // printf("%i, %i \n %i, %i", temp, temp2, row, col);
        
    }
    // print array
    for (row = 0; row < d; row++)
    {
        printf("\n");
        for (col = 0; col < d; col++)
        {
            if (board[col][row] == 0)
            {
                printf("%3c ", 95);
                continue;
            }
            printf("%3d ", board[row][col]);
        }
    }
    printf("\n\n");
}

