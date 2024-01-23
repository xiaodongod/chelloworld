#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 5
#define N 5

int main() {
    int a[M][N] = {
        {3,7,3,9,3},
        {3,6,3,6,3},
        {4,5,4,5,4},
        {3,6,3,6,3},
        {3,8,3,8,3}
    };

    bool matrix_max_in_row[M][N] = {false};
    bool matrix_max_in_col[M][N] = {false};

    for (int i = 0; i < M; i++)
    {
        int max = a[i][0];
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] > max )
            {
                max = a[i][j];
            }
        }
        
        for (int j = 0; j < N; j++)
        {
            if (a[i][j] == max )
            {
                matrix_max_in_row[i][j] = true;
            }
        }
        
    }
    
    for (int j = 0; j < N; j++)
    {
        int min = a[0][j];
        for (int i = 0; i < N; i++)
        {
            if (a[i][j] < min )
            {
                min = a[i][j];
            }
        }
        
        for (int i = 0; i < N; i++)
        {
            if (a[i][j] == min )
            {
                matrix_max_in_col[i][j] = true;
            }
        }
        
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (matrix_max_in_col[i][j] && matrix_max_in_row[i][j])
            {
                printf(" [%d] ", a[i][j]);
            } else {
                printf(" %d ", a[i][j]);
            }
        }
        printf("\n");
    }

    exit(0);
}