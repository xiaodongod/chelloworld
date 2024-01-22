#include <stdio.h>
#include <stdlib.h>

#define ROW 15
#define COL 15
#define BLACK 1
#define WHITE -1
#define BLANK 0


int main() {
    int chess[ROW][COL]={0};
    int player = BLACK;

    int loc_i, loc_j=0;
    int winner;

    do
    {   

        system("clear");
        // draw a chess board
        printf("    ");
        for (int i = 0; i < COL; i++)
        {
            printf("%3d", i);
        }
        printf("\n");
        for (int i = 0; i < ROW; i++)
        {
            printf("%2d ", i);
            printf("\033[47:31m]");
            for (int j = 0; j < COL; j++)
            {
                if (chess[i][j] == BLANK)
                {       
                    printf("%s", "|__");
                } else if (chess[i][j] == BLACK)
                {
                    printf("| *");
                } else {
                    printf("| 0");
                }
                
            }
            
            printf("|\033[0m\n");
        }
        // judge whether to terminate
        for (int i = 0; i < ROW; i++)
        {
            for (int j = 0; j < COL; j++)
            {
                if (chess[i][j] == BLANK)
                {
                    continue;
                }
                if (
                    (j < COL-4 && chess[i][j] == chess[i][j+1] && chess[i][j] == chess[i][j+2] && chess[i][j] == chess[i][j+3] && chess[i][j] == chess[i][j+4] ) || 
                    (j < ROW-4 && chess[i][j] == chess[i+1][j] && chess[i][j] == chess[i+2][j] && chess[i][j] == chess[i+3][j] && chess[i][j] == chess[i+4][j] ) || 
                    (j < ROW-4 && j>4 && chess[i][j] == chess[i+1][j-1] && chess[i][j] == chess[i+2][j-2] && chess[i][j] == chess[i+3][j-3] && chess[i][j] == chess[i+4][j-4] ) || 
                    (j < ROW-4 && j<COL-4 && chess[i][j] == chess[i+1][j+1] && chess[i][j] == chess[i+2][j+2] && chess[i][j] == chess[i+3][j+3] && chess[i][j] == chess[i+4][j+4] ) 
                )
                {
                    winner = player;
                    goto L;
                }
                
                
            }
            
        }
        


        // player insert location
        printf("Player %d please enter your move !\n", player);

        scanf("%d %d", &loc_i, &loc_j);

        while (chess[loc_i][loc_j] != BLANK )
        {
            printf("invaild location please re enter");
            scanf("%d %d", &loc_i, &loc_j);
        }
        

        chess[loc_i][loc_j] = player;

        player = player * -1;

    } while (loc_i != -1 && loc_j != -1);
    
    L: printf("player %d is win", winner);

    exit(0);
}